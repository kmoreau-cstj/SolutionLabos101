/*
Erreur classique du switch : oublier de mettre le break à la fin de chaque case

Erreur du if : mettre un ; après la condition du if : if (reponse == 1) ;

Erreur du else :	mettre une condition après le else, PAS de parenthèse après le else : ne pas faire else (reponse ==2)

Erreur possible : if (1 <= reponse <= 5) pas correct => if (reponse >=1 && reponse <=5)


Erreur	LNK2005	main déjà défini(e) dans Labo03Exercice1.obj : Deux fichiers sources contiennent chacun un main. DEux portes 
							principales, le programme ne sait pas choisir laquelle exécuter.
							=> solution retirer le fichier source qu'on ne veut plus du projet (suppr + enlever)


*/