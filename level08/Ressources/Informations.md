# Explications
L'executable affiche

    ./level08 [file to read]
Lorsqu'on essaye de lire le fichier token avec l'executable, ca nous dit:

    You may not access 'token'
je crée un fichier test dans tmp
`echo "abcdef" > /tmp/testtt`

Et on peut lire ce fichier.

On va utiliser les liens symboliques pour pouvoir lire le fichier token.

    ln -s /home/user/level08/token /tmp/flag && ./level08  /tmp/flag
Le mot de passe de flag08 est **quif5eloekouj29ke0vouxean**

Le flag est **25749xKZ8L7DkSCwJkT9dyv6f**