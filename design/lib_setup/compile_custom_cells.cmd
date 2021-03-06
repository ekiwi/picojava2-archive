/****************************************************************
 ---------------------------------------------------------------
     Copyright 1999 Sun Microsystems, Inc., 901 San Antonio
     Road, Palo Alto, CA 94303, U.S.A.  All Rights Reserved.
     The contents of this file are subject to the current
     version of the Sun Community Source License, picoJava-II
     Core ("the License").  You may not use this file except
     in compliance with the License.  You may obtain a copy
     of the License by searching for "Sun Community Source
     License" on the World Wide Web at http://www.sun.com.
     See the License for the rights, obligations, and
     limitations governing use of the contents of this file.

     Sun, Sun Microsystems, the Sun logo, and all Sun-based
     trademarks and logos, Java, picoJava, and all Java-based
     trademarks and logos are trademarks or registered trademarks 
     of Sun Microsystems, Inc. in the United States and other
     countries.
 ----------------------------------------------------------------
******************************************************************/




 remove_design -all
include compile_lib.setup
read -f verilog ../rtl/custom_cells_behv.v
DESIGN_LIST = find(design,"*")
foreach (CUSTOM_CELL,DESIGN_LIST) {
	current_design CUSTOM_CELL
        uniquify -force  
	max_delay 0 all_outputs()
	set_load  LOAD_3_INV all_outputs()
        set_drive DRIVE_OF_INV3 all_inputs() 
	compile -map_effort high
}
write -format db -hierarchy -output custom_cells.db {DESIGN_LIST}
