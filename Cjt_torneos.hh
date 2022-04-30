/** @file Cjt_torneos.hh
    @brief Especificación de la clase Cjt_torneos
 */

#ifndef CJT_TORNEOS_HH
#define CJT_TORNEOS_HH

#include "Cjt_jugadores.hh"
#include "Torneo.hh"

#ifndef NO_DIAGRAM
#include <iostream>
#include <map>
#include <vector>
#endif

using namespace std;

/** @class Cjt_torneos
    @brief Representa el conjunto de torneos del ciruito
*/

class Cjt_torneos{

    private:
    map<string, Torneo> torneos;

    public:
    
    //modificadoras
	//Las siguientes dos funciones presentan un arbol como retorno, esto es solo una idea inicial
	/** @brief empieza un torneo
	    \pre <em>nombre</em> es el nombre de un torneo existente
	    \post Se imprime el cuadro de emparejamientos del torneo con <em>nombre</em>
    */
	void iniciar_torneo(string nombre, Cjt_jugadores& j);
	

	/** @brief finaliza un torneo
	    \pre <em>nombre</em> es el nombre de un torneo existente
	    \post Se imprime el cuadro de resultados del torneo con las puntuaciones
	
    void finalizar_torneo(string nombre);
    */

      /** @brief Añade un nuevo torneo en el conjunto
	\pre c >= -1, <em>t</em> es el nombre de un torneo
	\post Se ha añadido un torneo al conjunto
    */
    void nuevo_torneo(string nombre, int c);
    
    /** @brief Elimina un torneo del conjunto
	\pre <em>t</em> es el nombre de un torneo
	\post se ha eliminado un torneo del conjunto
     */ 
    void baja_torneo(string nombre);

    //consultora
    /** @brief Comprueba el nombre de torneos del conjunto
	\pre Existe un conjunto de torneos
	\post Se imprime el valor de torneos total del conjunto
    */
    int num_torneos() const;

    /** @brief Comprueba si existe el torneo en el conjunto
	\pre <em>nombre</em> es el nombre de un torneo
	\post 1 si el torneo ya existe en el conjunto, 0 en caso contrario
     */ 
    bool existe_torneo(string nombre) const;

    //escritura
    /** @brief Consulta e imprime los torneos en orden creciente lexicográfico
	\pre Existe un conjunto de torneos ordenados en orden lexicográfico
	\post Se ha impreso el conjunto de torneos de forma creciente y con su categoría
    */
    void listar_torneos(Cjt_categorias& c);

    /** @brief Actualiza la información del conjunto de jugadores una vez terminado o eliminado 
	un torneo
	\pre j es el conjunto de jugadores del torneo t, <em>nombre</em> es el nombre de un torneo
	\post Se han actualizado las estadísticas pertinentes a los jugadores del torneo
    
    void actualizar_jugadores(Cjt_jugadores& j, string nombre);
    */

    /** @brief Hace la lectura inicial del conjunto torneos
       \pre <em>cierto</em>
       \post Se ha leido el conjunto inicial de torneos con su categoria correspondiente
    */
    void lectura_ini_tor();

};

#endif
