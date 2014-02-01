# invoke SourceDir generated makefile for uartconsole.pem4f
uartconsole.pem4f: .libraries,uartconsole.pem4f
.libraries,uartconsole.pem4f: package/cfg/uartconsole_pem4f.xdl
	$(MAKE) -f C:\Users\Nathaniel\workspace_v5_5\KIRC_Software\KIRC_FltCmp_v0.1/src/makefile.libs

clean::
	$(MAKE) -f C:\Users\Nathaniel\workspace_v5_5\KIRC_Software\KIRC_FltCmp_v0.1/src/makefile.libs clean

