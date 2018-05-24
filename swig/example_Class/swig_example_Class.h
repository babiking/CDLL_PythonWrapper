//
// Created by SENSETIME\fengjing1 on 18-5-24.
//

#ifndef CDLL_PYTHONWRAPPER_SWIG_EXAMPLE_CLASS_H
#define CDLL_PYTHONWRAPPER_SWIG_EXAMPLE_CLASS_H

class myComplex {

    public:

        float Re;  // complex real part
        float Im;  // complex imaginary part

        myComplex(){};
        myComplex(float re, float im):Re(re), Im(im){};

        myComplex operator+(const myComplex& other);

        void set_dataID(const char* id);
        const char* get_dataID(void);

    private:
        const char* dataID;


};

#endif //CDLL_PYTHONWRAPPER_SWIG_EXAMPLE_CLASS_H
