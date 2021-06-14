# Explications
Il y a un executable qui affiche **level07**

En faisant strings level07, on voit certaines choses interessantes: LOGNAME et getenv.

la commande env nous montre que LOGNAME est une variable d'environnement
Donc l'executable affiche simplement la variable d'environnement.

On va lui faire executer getflag en changeant la valeur de LOGNAME.

    LOGNAME=';getflag'
On a notre flag **fiumuikeil55xe9cu4dood66h**