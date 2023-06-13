#ifndef MD_MODEL-STEADY_H
#define MD_MODEL-STEADY_H

const unsigned int model_mu_dim1 = 3;

const float model_mu[3] = {
    0.000679659305993691, 0.0006613785488958986, 0.0008088753943217653
};

const unsigned int model_inv_cov_dim1 = 3;
const unsigned int model_inv_cov_dim2 = 3;

const float model_inv_cov[3][3] = {
    197600295.65531713, -24379548.446011353, 2394827.077276792, 
    -24379548.446011353, 207140426.82222793, -24370458.342991024, 
    2394827.0772767914, -24370458.342991017, 93089656.12940083
};

#endif //MD_MODEL-STEADY_H