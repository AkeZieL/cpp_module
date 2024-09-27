#include "Pmerge.hpp"

// Constructeur de la classe Pmerge
Pmerge::Pmerge(int argc, char **argv)
{
    for (int i = 1; argv[i]; i++)
    {
        int value = atoi(argv[i]);
        if (value <= 0)
        {
            std::cerr << "Error: invalid input value: negative input !" << std::endl;
            exit(1);
        }
        dataList.push_back(value);
        dataVec.push_back(value);
    }
    std::cout << "Before: ";
    printCont(dataList);

    clock_t startList = clock();
    sortList(dataList, dataList.begin(), dataList.end(), 2);
    clock_t endList = clock();
    double durationList = static_cast<double>(endList - startList) / CLOCKS_PER_SEC;

    clock_t startVector = clock();
    sortVector(dataVec, 0, dataVec.size() - 1, 2);
    clock_t endVector = clock();
    double durationVector = static_cast<double>(endVector - startVector) / CLOCKS_PER_SEC;

    std::cout << "After: ";
    printCont(dataVec);
    printCont(dataList);

    std::cout << "Time to process a range of " << argc - 1 << " elements with std::list : " << durationList << " us" << std::endl;
    std::cout << "Time to process a range of " << argc - 1 << " elements with std::vector : " << durationVector << " us" << std::endl;
}

// Fonction pour afficher le contenu d'un conteneur
template <typename T>
void Pmerge::printCont(const T& container)
{
    typename T::const_iterator it;

    for(it = container.begin(); it != container.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

// Tri par insertion pour un vecteur (C++98)
void insertionSortVec(std::vector<int>& arr, int left, int right)
{
    for (int i = left + 1; i <= right; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= left && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

// Fusion de deux sous-vecteurs (C++98)
void mergeVec(std::vector<int>& arr, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Tri fusion-insertion pour un vecteur (C++98)
void Pmerge::sortVector(std::vector<int>& arr, int left, int right, int k)
{
    if (right - left + 1 <= k) {
        insertionSortVec(arr, left, right);
    } else {
        int mid = left + (right - left) / 2;
        sortVector(arr, left, mid, k);
        sortVector(arr, mid + 1, right, k);
        mergeVec(arr, left, mid, right);
    }
}



void mergeList(std::list<int>::iterator left,
               std::list<int>::iterator mid, std::list<int>::iterator right) {
    // Créer des listes temporaires pour les sous-listes
    std::list<int> L, R;

    // Remplir la liste L avec les éléments de la sous-liste gauche
    for (std::list<int>::iterator it = left; it != mid; ++it) {
        L.push_back(*it);
    }

    // Remplir la liste R avec les éléments de la sous-liste droite
    for (std::list<int>::iterator it = mid; it != right; ++it) {
        R.push_back(*it);
    }

    // Itérateurs pour les listes temporaires
    std::list<int>::iterator itL = L.begin();
    std::list<int>::iterator itR = R.begin();
    std::list<int>::iterator it = left; // Itérateur pour la liste d'origine

    // Fusionner les deux listes dans la liste d'origine
    while (itL != L.end() && itR != R.end()) {
        if (*itL <= *itR) {
            *it = *itL;
            ++itL;
        } else {
            *it = *itR;
            ++itR;
        }
        ++it;
    }

    // Copier les éléments restants de L (s'il y en a)
    while (itL != L.end()) {
        *it = *itL;
        ++it;
        ++itL;
    }

    // Copier les éléments restants de R (s'il y en a)
    while (itR != R.end()) {
        *it = *itR;
        ++it;
        ++itR;
    }
}

//Tri par insertion pour liste
void insertionSortList(std::list<int>& lst) {
    if (lst.empty()) return; // Si la liste est vide, rien à faire

    // Commence avec l'itérateur au premier élément
    for (std::list<int>::iterator it = ++lst.begin(); it != lst.end(); ) {
        int key = *it; // Sauvegarde la valeur à insérer
        std::list<int>::iterator j = it; // Initialise l'itérateur pour parcourir en arrière

        // Déplace les éléments plus grands vers la droite
        while (j != lst.begin()) {
            std::list<int>::iterator temp = j; // Crée un nouvel itérateur pour garder la position actuelle
            --temp; // Décrémente pour obtenir l'itérateur précédent

            // Comparaison et déplacement des éléments
            if (*temp > key) {
                *j = *temp; // Déplace l'élément vers la droite
                j = temp; // Déplace j vers le précédent
            } else {
                break; // Sort de la boucle si la condition n'est plus remplie
            }
        }

        // Insère la clé à la bonne position
        *j = key;

        // Passe à l'élément suivant dans la liste
        it++; // Incrémente it pour passer au prochain élément
    }
}
// Tri fusion-insertion pour une liste
void Pmerge::sortList(std::list<int>& lst, std::list<int>::iterator left, std::list<int>::iterator right, int k)
{
    // Condition de base pour le tri par insertion
    if (std::distance(left, right) <= k) {
        insertionSortList(lst);
    } else {
        // Trouver le milieu
        std::list<int>::iterator mid = left;
        std::advance(mid, std::distance(left, right) / 2); // Trouver le milieu
        sortList(lst, left, mid, k);
        sortList(lst, mid, right, k);
        mergeList(left, mid, right);
    }
}

