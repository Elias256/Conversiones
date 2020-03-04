#ifndef TANQUES_H
#define TANQUES_H

Class Tanques{

//Métodos
public:
	//Método constructor
	Tanques(float litros);
	float ConvertirTotal();
	
	// Métodos setter
	void setLitros(float litros);
	void setYardasCubicas(float YardasCubicas);
	void setYardasCubicas(float YardasCubicas);
	void setMetrosCubicos(float MetrosCubicos);
	void setMetrosCubicos75(float MetrosCubicos75);
	void setPiesCubicos75(float PiesCubicos75);
	void setMetrosCubicos25(float MetrosCubicos25);
	void setPiesCubicos25(float PiesCubicos25);

	//Métodos getter
	float getLitros();
	float getYardasCubicas();
	float getYardasCubicas();
	float getMetrosCubicos();
	float getMetrosCubicos75();
	float getPiesCubicos75();
	float getMetrosCubicos25();
	float getPiesCubicos25();

	float ConvertirTotal::Conversiones();
//Atributos
private:
	float Litros;
	float YardasCubicas;
	float YardasCubicas;
	float MetrosCubicos;
	float MetrosCubicos75;
	float PiesCubicos75;
	float MetrosCubicos25;
	float PiesCubicos25;															
};
endif