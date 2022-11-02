Emprunts de livres
La grande bibliothèque de la ville a actuellement des difficultés à gérer son stock car elle est très fréquentée en ce moment et ne dispose pas d'un nombre suffisant d'employés. Vous décidez de l'aider en écrivant un programme informatique permettant de soulager le travail des employés.

Ce que doit faire votre programme :
La bibliothèque possède nbLivres livres indexés de 0 à nbLivres - 1. Chaque jour, un certain nombre de clients demandent à emprunter des livres pour une certaine durée. Si le livre est disponible, la requête du client est satisfaite, sinon le client repart sans livre.

Votre programme doit d'abord lire sur une première ligne deux entiers : nbLivres <= 1000 et nbJours. Pour chacun des jours, votre programme lira un entier nbClients sur une ligne puis nbClients lignes de deux entiers. Le premier entier correspond à l'indice du livre et le second la durée correspondante. (voir l'exemple d'entrée). Il affichera ensuite, sur des lignes séparées, pour chaque client un 1 si le livre peut être prêté et 0 dans le cas contraire.

On remarquera que si un client emprunte un livre le jour iJour pendant une durée duree alors celui-ci ne sera de nouveau disponible qu'au jour iJour + duree. De plus, si plusieurs personnes demandent le même livre pendant une journée, seule la première a une chance d'être satisfaite.

Limites de temps et de mémoire (C)
Temps : 1 s sur une machine à 1 GHz.
Mémoire : 8 000 ko.
-Exemple
entrée :

2 4
2
0 3
1 3
1
0 3
1
1 4
2 
0 2
0 5
sortie :

1
1
0
0
1
0
