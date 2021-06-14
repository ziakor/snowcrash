# Explications

En regardant plus en détail le fichier /etc/passwd, on voit que l'on peut voir le contenu du champ password de l'utilisateur flag01.

En utilisant le logiciel john the ripper, on va pour avoir le mot de passe.

Tout d'abord, on récupere le fichier /etc/passwd sur notre machine grâce à la commande scp.

    scp -P 4242 level01@192.168.1.10:/etc/passwd .

Ensuite, on peut utiliser john the ripper.
Exemple:

    .\john.exe ..\..\..\passwd

On obtient le mot de passe pour se connecter à l'utilisateur flag01: abcdefg

le flag est **f2av5il02puano7naaf6adaaf**