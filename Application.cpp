#include "Application.h"

using namespace std;

Question Application::Question_Random(){
    return qst_tab[rand() %sizeof(qst_tab)] ;
}

