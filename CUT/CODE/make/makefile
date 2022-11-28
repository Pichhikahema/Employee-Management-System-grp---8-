IDIR=../include
CC=gcc
BDIR=../bin
ODIR=../obj
SDIR=../src
OFILES=$(ODIR)/main.o $(ODIR)/admin_menu.o $(ODIR)/employee_menu.o $(ODIR)/func.o $(ODIR)/valid_func.o $(ODIR)/project_func.o $(ODIR)/emp_func.o

EMS:$(OFILES)
	$(CC) -o $(BDIR)/EMS $(OFILES)

$(ODIR)/main.o:$(SDIR)/main.c $(IDIR)/*
	gcc -o $(ODIR)/main.o -c $(SDIR)/main.c

$(ODIR)/admin_menu.o:$(SDIR)/admin_menu.c $(IDIR)/*
	gcc -o $(ODIR)/admin_menu.o -c $(SDIR)/admin_menu.c

$(ODIR)/employee_menu.o:$(SDIR)/employee_menu.c $(IDIR)/*
	gcc -o $(ODIR)/employee_menu.o -c $(SDIR)/employee_menu.c

$(ODIR)/func.o:$(SDIR)/func.c $(IDIR)/*
	gcc -o $(ODIR)/func.o -c $(SDIR)/func.c

$(ODIR)/project_func.o:$(SDIR)/project_func.c $(IDIR)/*
	gcc -o $(ODIR)/project_func.o -c $(SDIR)/project_func.c

$(ODIR)/valid_func.o:$(SDIR)/valid_func.c $(IDIR)/*
	gcc -o $(ODIR)/valid_func.o -c $(SDIR)/valid_func.c

$(ODIR)/emp_func.o:$(SDIR)/emp_func.c $(IDIR)/*
	gcc -o $(ODIR)/emp_func.o -c $(SDIR)/emp_func.c

clean:
	rm $(ODIR)/*
