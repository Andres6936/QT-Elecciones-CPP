#ifndef CANDIDATE_H
#define CANDIDATE_H

#include <QString>

class Candidate
{

private:

    // Fields

    QString pathToImage;

    QString name;

    QString apellido;

    QString partidoPolitico;

    unsigned int edad;

    double costoCampanha;

    unsigned int votos;

public:

    // Constructs

    Candidate(QString path, QString nName, QString nApellido,
              QString nPArtidoPolitico, unsigned int nEdad);

    // Getter Methods

    QString getPathToImage() const;

    QString getName() const;

    QString getApellido() const;

    QString getPartidoPolitico() const;

    unsigned int getEdad() const;

    double getCostoCampanha() const;

    unsigned int getVotos() const;

    // Methods

    void ingresarUnVoto();

    void agregarVotoTelevision();

    void agregarVotoRadio();

    void agregarVotoInternet();

    void reiniciarConteoVotos();

    void reiniciarCostoCampanha();
};

#endif // CANDIDATE_H
