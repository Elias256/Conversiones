#include "Tanques.h"

//Método constructor
Tanques::Tanques(float litros){
	this->Litros = litros;
}
Tanques::ConvertirTotal(){

}
	
// Métodos setter
void Tanques::setLitros(float litros){
	this->Litros = Litros;
}
void Tanques::setYardasCubicas(float YardasCubicas){
	this->YardasCubicas = YardasCubicas;
}
void Tanques::setYardasCubicas(float YardasCubicas){
	this->YardasCubicas = YardasCubicas;
}
void Tanques::setMetrosCubicos(float MetrosCubicos){
	this->MetrosCubicos = MetrosCubicos;
}
void Tanques::setMetrosCubicos75(float MetrosCubicos75){
	this->MetrosCubicos75 = MetrosCubicos75;
}
void Tanques::setPiesCubicos75(float PiesCubicos75){
	this->PiesCubicos75 = PiesCubicos75;
}
void Tanques::setMetrosCubicos25(float MetrosCubicos25){
	this->MetrosCubicos25 = MetrosCubicos25;
}
void Tanques::setPiesCubicos25(float PiesCubicos25){
	this->PiesCubicos25 = PiesCubicos25;
}

//Métodos getter
float Tanques::getLitros(){
	return this->Litros;
}n
float Tanques::getYardasCubicas(){
	return this->YardasCubicas;
}
float Tanques::getYardasCubicas(){
	return this->YardasCubicas;
}
float Tanques::getMetrosCubicos(){
	return this->MetrosCubicos;
}
float Tanques::getMetrosCubicos75(){
	return this->MetrosCubicos75;
}
float Tanques::getPiesCubicos75(){
	return PiesCubicos75;
}
float Tanques::getMetrosCubicos25(){
	return this->MetrosCubicos25;
}
float Tanques::getPiesCubicos25(){
	return PiesCubicos25;
}

void ConvertirTotal::Conversiones(){
	this->Litros = Litros
	this->YardasCubicas = YardasCubicas
	this->YardasCubicas = YardasCubicas
	this->MetrosCubicos = YardasCubicas/1.308
	this->MetrosCubicos75 = YardasCubicas/1.308*0.75
	this->PiesCubicos75 = YardasCubicas*27*0.75
	this->MetrosCubicos25 = YardasCubicas/1.308*0.25
	this->PiesCubicos25 = YardasCubicas*27*0.75*0.25

}