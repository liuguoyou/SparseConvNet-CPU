#pragma once
#include "SparseConvNet.h"

class DeepCNet : public SparseConvNet {
public:
  DeepCNet (int dimension, int l, int k, ActivationFunction fn, int nInputFeatures, int nClasses, float p=0.0f, int nTop=1);
};

class DeepC2 : public SparseConvNet {
public:
  DeepC2 (int dimension, int l, int k, ActivationFunction fn, int nInputFeatures, int nClasses, float p=0.0f, int nTop=1);
};

class DeepCNiN : public SparseConvNet {
public:
  DeepCNiN(int dimension, int l, int k, ActivationFunction fn, int nInputFeatures, int nClasses, float p=0.0f, int nTop=1);
};

class DeepC2C2 : public SparseConvNet {
public:
  DeepC2C2(int dimension, int l, int k, ActivationFunction fn, int nInputFeatures, int nClasses, float p=0.0f, int nTop=1);
};

class POFMPSparseConvNet : public SparseConvNet {
public:
  POFMPSparseConvNet(int dimension, int l, int k, float fmpShrink, ActivationFunction fn, int nInputFeatures, int nClasses, float p=0.0f, int nTop=1);
};

class ROFMPSparseConvNet : public SparseConvNet {
public:
  ROFMPSparseConvNet(int dimension, int l, int k, float fmpShrink, ActivationFunction fn, int nInputFeatures, int nClasses, float p=0.0f, int nTop=1);
};
