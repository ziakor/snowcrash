# Explications

Le home de l'utilisateur ***level00*** est vide.

En faisant un find sur l'utilisateur ***flag00***

    find / -user flag00 2> /dev/null
La commande nous affiche 2 fichiers: 
![liste fichier flag00](https://i.imgur.com/xlZVhQq.png)
Le fichier /usr/sbin/john contient **cdiiddwpgswtgt**

Si on entre le contenu du fichier sur  [ce site](https://www.dcode.fr/identification-chiffrement), On voit que c'est chiffré grace au code Cesar.

***cdiiddwpgswtgt*** nous donne  ***nottoohardhere***.

On peut se connecter a l'utilisateur flag 00
login: **flag00**
password: **nottoohardhere**

getflag nous affiche le flag du niveau: x24ti5gi3x0ol2eh4esiuxias
