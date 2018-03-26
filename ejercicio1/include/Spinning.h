#ifndef SPINNING_H
#define SPINNING_H


class Spinning {

    private:
        int cantBicicletas;

    public:
        Spinning();
        ~Spinning();

        int getCantBicicletas();
        void setCantBicicletas();

        int cupo();

};

#endif // SPINNING_H
