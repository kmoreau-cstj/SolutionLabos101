/*
Erreur classique du switch : oublier de mettre le break � la fin de chaque case

Erreur du if : mettre un ; apr�s la condition du if : if (reponse == 1) ;

Erreur du else :	mettre une condition apr�s le else, PAS de parenth�se apr�s le else : ne pas faire else (reponse ==2)

Erreur possible : if (1 <= reponse <= 5) pas correct => if (reponse >=1 && reponse <=5)


Erreur	LNK2005	main d�j� d�fini(e) dans Labo03Exercice1.obj : Deux fichiers sources contiennent chacun un main. DEux portes 
							principales, le programme ne sait pas choisir laquelle ex�cuter.
							=> solution retirer le fichier source qu'on ne veut plus du projet (suppr + enlever)


*/