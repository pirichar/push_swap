#include "push_swap.h"


//verify if allready in order

//sort :
//pushing the smallest 
/* 
Si j'ai 3 patente dans mon truc le plus petit sera toujours 0  ou 1 en fonction de ou je commence a compter
Donc si je cherche toujours pour 1 et que je le push sur B je n'ai qu'à vérifier si c'est mes 2 restants sont en ordre sur le A
puis push mon truc du b vers le a;
S'il ne sont pas en order je les rotate et ça fini là;