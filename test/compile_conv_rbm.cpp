#include "dbn/conv_rbm.hpp"
#include "dbn/conv_layer.hpp"

template<typename RBM>
void test_rbm(){
    RBM rbm;
}

int main(){
    //Very basic RBM that must compile
    //typedef dll::conv_rbm<dll::conv_layer<dll::conv_conf<true, 50, dll::Type::SIGMOID, dll::Type::SIGMOID>, 32, 12, 40>> crbm_1;
    typedef dll::conv_rbm<dll::conv_layer<32, 12, 40>> crbm_1;

    std::cout << crbm_1::Momentum << std::endl;
    std::cout << crbm_1::BatchSize << std::endl;

    typedef dll::conv_rbm<dll::conv_layer<32, 12, 40, dll::momentum, dll::batch_size<50>>> crbm_2;

    std::cout << crbm_2::Momentum << std::endl;
    std::cout << crbm_2::BatchSize << std::endl;

    //Test them all

    test_rbm<crbm_1>();
    test_rbm<crbm_2>();

    return 0;
}