ENTITY SOMA4BITS IS 
	PORT(Carryin:IN BIT;
		X1,X2:IN BIT_VECTOR(3 DOWNTO 0);
		Sout:OUT BIT_VECTOR(3 DOWNTO 0);
	Carryout:OUT BIT);
END SOMA4BITS;
ARCHITECTURE soma4b OF SOMA4BITS IS
COMPONENT SOMA1B
	PORT(a,b,Cin:IN BIT;
	s,Cout:OUT BIT);
END COMPONENT;
SIGNAL c:BIT_VECTOR(4 DOWNTO 0);
BEGIN
c(0)<=Carryin;
gen:FOR i IN 0 TO 3 GENERATE
	l:SOMA1B PORT MAP(Cin=>c(i),a=>X1(i),b=>X2(i),s=>Sout(i),Cout=>c(i+1));
	END GENERATE;
	Carryout<=c(4);
END soma4b;