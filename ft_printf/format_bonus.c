/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daechoi <daechoi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 18:30:37 by daechoi           #+#    #+#             */
/*   Updated: 2022/01/06 18:12:55 by daechoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char    *padding(int zero_flag, int pad_len)
{
    char    *pad_str;
    int     i;

    i = 0;
    if (pad_len < 0)
        return (ft_strdup(""));
    pad_str = (char *)malloc((pad_len + 1) * sizeof(char));
    if (!pad_str)
        return (NULL);
    if (zero_flag == 1) 
    {
        while (i < pad_len)
            pad_str[i++] = '0';
    }
    else
    {
        while (i < pad_len)
            pad_str[i++] = ' ';
    }
    pad_str[i] = '\0';
    return (pad_str);
}

int char_format(char c, t_info info)
{
    char    *pad_str;
	int		print_len;

    //if (info.width > 0)
    pad_str = padding(info.zero, info.width - 1);
    //else
    //    pad_str = ft_strdup("");
    if (!pad_str)
        return (-1);
    if (info.minus > 0)
    {
        ft_putchar_fd(c, 1);
        ft_putstr_fd(pad_str, 1);
    }
    else
    {
        ft_putstr_fd(pad_str, 1);
        ft_putchar_fd(c, 1);
    }
	print_len = ft_strlen(pad_str) + 1;
    free(pad_str);
    return (print_len);
}

int str_format(char *s, t_info info)
{
    char    *pad_str;
    char    *temp;
	int		print_len;

	print_len = 0;
    if (!s)
        return (-1);
    if (info.width > 0)
        pad_str = padding(info.zero, info.width - ft_strlen(s) + 1);
    else
        pad_str = ft_strdup("");
    if (!pad_str)
        return (-1);
    temp = pad_str;
    if (info.minus > 0)
    {
        pad_str = ft_strjoin(s, temp);
        free(temp);
        if (!pad_str)
            return (-1);
        ft_putstr_fd(pad_str, 1);
    }
    else
    {
        pad_str = ft_strjoin(temp, s);
        free(temp);
        if (!pad_str)
            return (-1);
        ft_putstr_fd(pad_str, 1);
    }
	print_len = ft_strlen(pad_str);
    free(pad_str);
    return (print_len);
}

char	*set_zpad(t_info info, char *abs)
{
	char	*zpad_str;
    char    *temp;

	if (info.prec > 0)
        zpad_str = padding(1, info.prec - ft_strlen(abs));
	else
		zpad_str = ft_strdup("");
	if (abs[0] == '-')
	{
		temp = zpad_str;
		zpad_str = ft_strjoin(temp, abs + 1);
		free(temp);
		if (!zpad_str)
			return (NULL);
		temp = zpad_str;
		zpad_str = ft_strjoin("-", temp);
		free(temp);
		if (!zpad_str)
			return (NULL);
	}
	else
	{
		temp = zpad_str;
		zpad_str = ft_strjoin(temp, abs);
		free(temp);
		if (!zpad_str)
			return (NULL);
	}
	return (zpad_str);
}

int int_format(int n, t_info info)
{
    char    *zpad_str;
	char	*pad_str;
	char	*abs;
	int		print_len;
	
	print_len = 0;
	abs = ft_itoa(n);
	zpad_str = set_zpad(info, abs);
	if (!zpad_str)
		return (-1);
	pad_str = padding(info.zero, info.width - info.prec - 1);
    if (!pad_str)
	    return (-1);
    if (info.minus > 0)
    {
        ft_putstr_fd(zpad_str, 1);
        ft_putstr_fd(pad_str, 1);
    }
    else
    {
        ft_putstr_fd(pad_str, 1);
        ft_putstr_fd(zpad_str, 1);
    }
    print_len = ft_strlen(pad_str) + ft_strlen(zpad_str);
	free(abs);
    free(pad_str);
    free(zpad_str);
	return (print_len);
}