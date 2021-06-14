# Explications
Dans le home, il y a le fichier level02.pcap.
Grâce a ce fichier, on va pouvoir analyser les données venant des paquet du réseau.

Avant tout, on va récuperer le fichier sur notre machine.

    scp -P 4242 level02@192.168.1.10:/home/user/level02/level02.pcap .

On va pouvoir utiliser Wireshark pour lire le fichier.

Sur le paquet 43, on voit les données suivantes:
![enter image description here](https://i.imgur.com/4H9Qauv.png)
En faisant ***Clique droit->Suivre->Flux TCP***, on va pouvoir avoir toute les données de ce flux.
![enter image description here](https://i.imgur.com/eRwVNQj.png)
On voit Password: **ft_wandr...NDRel.lol**

Lorsque l'on essaye de se connecter au flag02, ca ne fonctionne pas.

Regardons le flux en hexdump
![enter image description here](https://i.imgur.com/52ZaaPH.png)
On voit que les **.** correspondent à la valeur hexa 7F. Dans la table ascii, 7f correspond a DEL.
En supprimant  les caracteres **ndrl**, on obtient: **ft_waNDReL0L**

le flag est **kooda2puivaav1idi4f57q8iq**