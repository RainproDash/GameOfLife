# GameOfLife
__A recreation of the game of life__

Le jeu se joue sur une grille bidimensionnelle, avec certaines cases occupées par des cellules.

A chaque étape, l’évolution des cellules est entièrement déterminée par l’état des huit carrés voisins, de la manière suivante :
- Dans une case vide, une cellule naît si elle a exactement trois cellules voisines.
- Une cellule qui a zéro ou un voisin meurt d'isolement.
- Une cellule qui compte quatre à huit voisins meurt par étouffement (manque de ressources).

Le programme prend 2 arguments : le chemin d'un fichier contenant la carte initiale et un nombre n (n>=0) indiquant le nombre d'itérations à effectuer sur la carte.  
Le programme affiche la grille résultante après n itérations. Les cellules sont représentées par des « X », des carrés vides sont représentés par '.'.

Voici quelques exemples :

<p align="center">
  <img src="https://github.com/RainproDash/GameOfLife/assets/91848714/a34fb745-fda3-4518-86c3-f10531e6c0c4" alt="Image de démonstration">
</p>
