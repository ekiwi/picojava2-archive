/****************************************************************
 ***
 ***    Copyright 1999 Sun Microsystems, Inc., 901 San Antonio
 ***    Road, Palo Alto, CA 94303, U.S.A.  All Rights Reserved.
 ***    The contents of this file are subject to the current
 ***    version of the Sun Community Source License, picoJava-II
 ***    Core ("the License").  You may not use this file except
 ***    in compliance with the License.  You may obtain a copy
 ***    of the License by searching for "Sun Community Source
 ***    License" on the World Wide Web at http://www.sun.com.
 ***    See the License for the rights, obligations, and
 ***    limitations governing use of the contents of this file.
 ***
 ***    Sun, Sun Microsystems, the Sun logo, and all Sun-based
 ***    trademarks and logos, Java, picoJava, and all Java-based
 ***    trademarks and logos are trademarks or registered trademarks
 ***    of Sun Microsystems, Inc. in the United States and other
 ***    countries.
 ***
 *****************************************************************/




/* Pointers to port handler routines. */

#ifndef _SERIAL_PORT_H_
#define _SERIAL_PORT_H_

#pragma ident "@(#)serial_port.h 1.4 Last modified 10/06/98 11:37:10 SMI"

/* interface routines for serial port, loaded dynamically from
   the library in env-var PJSIM_PORT_HANDLER */

int (*debugger_serial_port_init) (void);
unsigned char (*debugger_serial_port_read) (void);
void (*debugger_serial_port_write)(unsigned char);

#endif /* _SERIAL_PORT_H_ */
