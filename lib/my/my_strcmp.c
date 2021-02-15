/*
** EPITECH PROJECT, 2020
** my_strcmp
** File description:
** my_strcmp
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;
    int result = 0;

    for (; s1[i] != '\0' && s2[i] != '\0'; i++){
        if (s1[i] == s2[i])
            return (0);
    }
    if (s1[i] != s2[i]){
        result = s1[i] - s2[i];

    return (result);
    }
    return (0);
}
