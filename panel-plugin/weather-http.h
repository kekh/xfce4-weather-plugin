/*  Copyright (c) 2003-2012 Xfce Development Team
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#ifndef __WEATHER_HTTP_H__
#define __WEATHER_HTTP_H__

G_BEGIN_DECLS

typedef void (*WeatherFunc) (gboolean succeed,
                             gchar *received,
                             size_t len,
                             gpointer user_data);


void weather_http_cleanup_queue(void);

void weather_http_receive_data(const gchar *hostname,
                               const gchar *url,
                               const gchar *proxy_host,
                               gint proxy_port,
                               const WeatherFunc cb_func,
                               gpointer user_data);

G_END_DECLS

#endif
