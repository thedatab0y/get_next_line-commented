/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busmanov <busmanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:58:55 by busmanov          #+#    #+#             */
/*   Updated: 2022/10/21 11:11:07 by busmanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stddef.h>

char	*get_next_line(int fd);
char	*ft_strjoin(char *temp, char *buffer);
char	*ft_strchr(char *str, int c);
size_t	ft_strlen(char *str);
char	*ft_ret_read_line(char *buffer);
char	*ft_update_line(char *buffer);
char	*ft_read_line(char *buffer, int fd);

#endif
