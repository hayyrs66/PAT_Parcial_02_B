#include "Ejercicio02.h"

int Ejercicio02::countStudents(vector<char>* students, vector<char>* sandwiches)
{
    //se cuenta en R, C y V
    // https://stackoverflow.com/questions/46861611/how-to-count-number-of-element-in-an-int-type-array-where-0-can-be-an-element

    int counts[3] = { 0, 0, 0 };

    int n = students->size();

    int unableToEat = n;

    for (char student : *students) {
        if (student == 'R') counts[0]++;
        else if (student == 'C') counts[1]++;
        else if (student == 'V') counts[2]++;
    }

    for (int i = 0; i < n; i++) {
        char sandwich = (*sandwiches)[i];
        if (sandwich == 'R' && counts[0] > 0) 
            counts[0]--;

        else if (sandwich == 'C' && counts[1] > 0) 
            counts[1]--;

        else if (sandwich == 'V' && counts[2] > 0) 
            counts[2]--;
        else break;
        unableToEat--;
    }

    return unableToEat;

};
