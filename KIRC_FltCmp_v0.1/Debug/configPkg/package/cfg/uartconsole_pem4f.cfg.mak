# invoke SourceDir generated makefile for uartconsole.pem4f
uartconsole.pem4f: .libraries,uartconsole.pem4f
.libraries,uartconsole.pem4f: package/cfg/uartconsole_pem4f.xdl
	$(MAKE) -f C:\Users\asusHD\workspace_v5_5\uartconsole_TivaTM4C123GH6PM/src/makefile.libs

clean::
	$(MAKE) -f C:\Users\asusHD\workspace_v5_5\uartconsole_TivaTM4C123GH6PM/src/makefile.libs clean

