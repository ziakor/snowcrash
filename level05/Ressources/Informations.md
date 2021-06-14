# Explications
A la connexion, on voit la phrase **You have new mail**.
Dans le dossier /var/mail, il y a un mail level05.
![mail](https://i.imgur.com/nFIMyUn.png)
Il y a règle crontab qui execute toute les 2 minutes le script /usr/sbin/openarenaserver
![openarenaserver](https://i.imgur.com/pxei1Kc.png)
Ce script execute tout les script contenu dans /opt/openarenaserver et les supprime.

On va faire un script qui execute getflag et stocke le résultat dans /tmp

    echo 'getflag > /tmp/level05' > /opt/openarenaserver/exploit

On attends un peu que la règle cron s'active et on a notre flag: viuaaale9huek52boumoomioc