int maximale (tablo T, int taille) {
	int max = T[0];
	for(int i=1;i<taille;i++){
		if(T[i]>max) max = T[i];
	}
	return max;
}

/* J'ai fait ceci dans le CC car j'ai l'habitude de
passer la longeur d'un tablo en parametre. Ce qu'on
doit faire si la taille n'est pas globale, ou si la
taille du tablo utile n'est pas la taille max.
J'ai aussi fait pareil pour le 2, 3 et 4.
*/