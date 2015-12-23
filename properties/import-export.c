/* -*- Mode: C; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4 -*- */
/***************************************************************************
 *
 * Copyright (C) 2008 Dan Williams, <dcbw@redhat.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 **************************************************************************/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <string.h>
#include <sys/types.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <ctype.h>

#include <glib/gi18n-lib.h>

#include <NetworkManager.h>

#include "import-export.h"
#include "nm-pptp.h"
#include "../src/nm-pptp-service-defines.h"

NMConnection *
do_import (const char *path, char **lines, GError **error)
{
	g_set_error_literal (error,
	                     PPTP_PLUGIN_UI_ERROR,
	                     PPTP_PLUGIN_UI_ERROR_UNKNOWN,
	                     "PPTP import is not implemented");
	return NULL;
}

gboolean
do_export (const char *path, NMConnection *connection, GError **error)
{
	g_set_error_literal (error,
	                     PPTP_PLUGIN_UI_ERROR,
	                     PPTP_PLUGIN_UI_ERROR_UNKNOWN,
	                     "PPTP export is not implemented");
	return FALSE;
}
