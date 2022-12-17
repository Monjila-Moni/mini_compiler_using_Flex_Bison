main:
	bison -d 1807112.y
	flex 1807112.l
	gcc lex.yy.c 1807112.tab.c