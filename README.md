Récapitulatif des fonctions de libft.h 

 

ft_atoi 
 Convertit une chaîne en entier (int), ignore les espaces au début et gère les signes (+/-). 

ft_bzero 
 Met à zéro (remplit avec \0) un bloc de mémoire de taille donnée. 

ft_isalnum 
 Vérifie si un caractère est alphanumérique (lettre ou chiffre). 

ft_isprint 
 Vérifie si un caractère est imprimable (y compris l’espace). 

ft_isdigit 
 Vérifie si un caractère est un chiffre (0-9). 

ft_isascii 
 Vérifie si un caractère appartient à la table ASCII (0-127). 

ft_isalpha 
 Vérifie si un caractère est une lettre (a-z ou A-Z). 

ft_toupper 
 Convertit un caractère minuscule en majuscule. 

ft_tolower 
 Convertit un caractère majuscule en minuscule. 

ft_memcmp 
 Compare deux blocs de mémoire sur une taille donnée, renvoie la différence entre les premiers octets différents. 

ft_memset 
 Remplit un bloc de mémoire avec une valeur donnée (octet par octet). 

ft_memmove 
 Copie un bloc de mémoire vers une destination, gère les chevauchements. 

ft_memchr 
 Cherche un octet dans un bloc de mémoire, renvoie un pointeur sur la première occurrence. 

ft_memcpy 
 Copie un bloc de mémoire vers une destination, sans gérer les chevauchements. 

ft_strrchr 
 Cherche la dernière occurrence d’un caractère dans une chaîne, parcourt de la fin vers le début. 

ft_strchr 
 Cherche la première occurrence d’un caractère dans une chaîne, parcourt du début vers la fin. 

ft_strncmp 
 Compare deux chaînes sur une longueur donnée, renvoie la différence entre les premiers caractères différents. 

ft_strlen 
 Calcule la longueur d’une chaîne (sans le \0 final). 

ft_strlcpy 
 Copie une chaîne dans une destination avec une taille maximale, garantit un \0 final. 

ft_strlcat 
 Concatène deux chaînes dans une destination avec une taille maximale, garantit un \0 final. 

ft_strnstr 
 Cherche une sous-chaîne dans une chaîne sur une longueur donnée, renvoie un pointeur sur la première occurrence. 

ft_substr 
 Extrait une sous-chaîne d’une chaîne à partir d’un index donné, sur une longueur spécifiée. 

ft_putstr_fd 
 Écrit une chaîne sur un descripteur de fichier donné. 

ft_putchar_fd 
 Écrit un caractère sur un descripteur de fichier donné. 

ft_putendl_fd 
 Écrit une chaîne suivie d’un \n sur un descripteur de fichier donné. 

ft_putnbr_fd 
 Écrit un entier (int) sur un descripteur de fichier donné. 

ft_strmapi 
 Applique une fonction à chaque caractère d’une chaîne, crée une nouvelle chaîne avec les résultats. 

ft_striteri 
 Applique une fonction à chaque caractère d’une chaîne, modifie la chaîne en place. 

ft_calloc 
 Alloue de la mémoire pour un tableau et l’initialise à zéro. 

ft_strjoin 
 Concatène deux chaînes en une nouvelle chaîne allouée. 

ft_strtrim 
 Supprime les caractères d’un ensemble donné au début et à la fin d’une chaîne. 

ft_split 
 Divise une chaîne en un tableau de sous-chaînes en utilisant un caractère délimiteur. 

ft_strdup 
 Duplique une chaîne en allouant une nouvelle mémoire. 

ft_itoa 
 Convertit un entier (int) en une chaîne de caractères. 

ft_lstadd_back 
 Ajoute un élément à la fin d’une liste chaînée. 

ft_lstadd_front 
 Ajoute un élément au début d’une liste chaînée. 

ft_lstlast 
 Renvoie le dernier élément d’une liste chaînée. 

ft_lstnew 
 Crée un nouvel élément de liste chaînée avec un contenu donné. 

ft_lstsize 
 Compte le nombre d’éléments dans une liste chaînée. 

ft_lstdelone 
 Supprime un élément d’une liste chaînée et libère sa mémoire. 

ft_lstclear 
 Supprime tous les éléments d’une liste chaînée et libère leur mémoire. 

nouv_stat 
 Met à jour le buffer statique dans get_next_line après avoir extrait une ligne. 

extract_line 
 Extrait une ligne (jusqu’à \n) du buffer statique dans get_next_line. 

stat_temporaire 
 Lit depuis un descripteur de fichier et met à jour le buffer statique dans get_next_line. 

get_next_line 
 Lit une ligne (jusqu’à \n) depuis un descripteur de fichier, gère un buffer statique. 

check_base 
 Vérifie si une base (utilisée dans ft_printf pour les conversions hexadécimales) est valide. 

ft_percent_printf 
 Affiche un caractère % pour ft_printf (gère le format %). 

ft_putnbr_unsigned 
 Affiche un entier non signé (unsigned int) pour ft_printf. 

ft_putstr_printf 
 Affiche une chaîne de caractères pour ft_printf. 

ft_putchar_printf 
 Affiche un caractère pour ft_printf. 

ft_putnbr_printf 
 Affiche un entier (int) pour ft_printf. 

ft_putnbr_hexa_printf 
 Affiche un nombre en hexadécimal (base 16) pour ft_printf, avec une base donnée (majuscule ou minuscule). 

convert_str 
 Traite un spécificateur de format (ex. %d, %s) dans ft_printf et appelle la fonction correspondante. 

ft_printf 
 Affiche une chaîne formatée avec des arguments variables, imite printf. 

ft_putptr_printf 
 Affiche une adresse mémoire (pointeur) en hexadécimal pour ft_printf. 
