#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Material
{
protected:
	string id;
	string titulo;
	string genero;
	string tipo;
	double duracion;
	string region;
	vector<string> actores;
	vector <string> directores;
	int cantidad;
	bool referenciaLimitada;
public:
	//Constructor
	Material(string id, string titulo, string genero, string tipo, double duracion, string region, vector <string> actores, vector <string> directores, int cantidad, bool referenciaLimitada) :
    id (id), titulo (titulo), genero(genero), tipo(tipo), duracion(duracion), region(region), actores(actores), directores (directores), cantidad(cantidad), referenciaLimitada(referenciaLimitada){}
	
	//Getters
	string getId() const { return id; } 
	string getTitulo() const { return titulo; } 
	string getGenero() const { return genero; }
	string getTipo() const { return tipo; }
	double getDuracion() const { return duracion; }
	string getRegion() const { return region; }
	int getCantidad() const { return cantidad; }
	vector <string> getActores() const
	{
		return actores;
	}
	vector <string> getDirectores() const
	{
		return directores;
	}
	bool getReferenciaLimitada() const
	{
		return referenciaLimitada;
	}
	 //Setters
	void setId(const string& id) { this->id; }
	void setTitulo(const string& titulo) { this->titulo; }
	void setGenero(const string& genero) { this->genero; }
	void setTipo(const string& tipo) { this->tipo; }
	void setDuracion(double duracion) { this->duracion; }
	void setRegion(const string& region) { this->region; }
	void setCantidad(int cantidad) { this->cantidad; }
	void setActores(const vector<string>& actores)
	{
		this->actores = actores;
	}
	void setDirectores(const vector <string>& directores)
	{
		this->directores = directores;
	}
	void setReferenciaLimitada(bool referenciaLimitada) { this->referenciaLimitada = referenciaLimitada; }



};

