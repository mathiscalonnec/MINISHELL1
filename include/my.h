/*
** EPITECH PROJECT, 2018
** my.h
** File description:
**
*/

typedef struct program
{
	char **env;
	char **path;
	char **param_array;
}program_t;

void	gestion_erreur(int size);
int	my_putchar(char c);
int	my_putstr(char const *str);
int	match_exit(char *str);
char	*find_word_return_string(char **env, char *word);
int	find_word_return_int(char **env, char *word);
int	match_word(char *str, char *word);
char	**array_path(char **str);
int	how_many_word(char *str, char delim);
char	**my_str_to_array_delim(char *str, char delim);
char	*strcut(char *str, int place);
char	*my_strcat(char *dest, char *src);
void	simple_exec(program_t *program);
void	choose_exec(program_t *program, char *str);
int	my_strlen(char const *str);
char	*my_strdup(char *str);
int	my_strcmp(char const *s1, char const *s2);
int	compare_str(char *str, char **array);
int	builtins(program_t *program);

void	builtins_exec(program_t *program);
void	choose_fonction(program_t *program);

void	my_cd(program_t *program);
void	my_setenv(program_t *program);
char	**ad_line_and_realloc(char **array, int len_base, char *ad);
void	my_unsetenv(program_t *program);
void	unsetenv_body(program_t *program, int *size, int *line);
void	my_env(char **env);


program_t *init_struct(char **env);
