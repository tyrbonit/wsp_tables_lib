
#ifndef CMAKE_GOOGLETEST_PYBIND11_EXAMPLE_WSPTABLES_P_H
#define CMAKE_GOOGLETEST_PYBIND11_EXAMPLE_WSPTABLES_P_H

namespace wsptables {


/*************************************************************************************************************/
/**                     Water and steam properties according to IAPWS IF-97                                 **/
/*************************************************************************************************************/

/** *Contents.                              										                        **/
/** *Units.                              										                        **/
/** *1 Calling functions                                  								                    **/
/** *1.1 Exposed functions                         												            **/
/** *1.2 Temperature (T)                                                  								    **/
/** *1.3 Pressure (p)                                                     								    **/
/** *1.4 Enthalpy (h)                                                    								    **/
/** *1.5 Specific Volume (v)                                              								    **/
/** *1.6 Density (rho)                                                   								    **/
/** *1.7 Specific entropy (s)                                            								    **/
/** *1.8 Specific internal energy (u)                                    								    **/
/** *1.9 Specific isobaric heat capacity (Cp)                            								    **/
/** *1.10 Specific isochoric heat capacity (Cv)                                                     		**/
/** *1.11 Speed of sound                                                								    **/
/** *1.12 Viscosity                                                    								      	**/
/** *1.13 Prandtl                                                     								     	**/
/** *1.14 Kappa                                                   								       		**/
/** *1.15 Surface tension                                            								        **/
/** *1.16 Heat conductivity                                           								        **/
/** *1.17 Vapour fraction                                             								        **/
/** *1.18 Vapour Volume Fraction                                           								    **/
/**                                                   								     					**/
/** *2 IAPWS if 97 Calling functions                               								            **/
/** *2.1 Functions for region 1                                    								            **/
/** *2.2 Functions for region 2                                   								            **/
/** *2.3 Functions for region 3                                     								        **/
/** *2.4 Functions for region 4                                      								        **/
/** *2.5 Functions for region 5                                      								        **/
/**                                                  				 								    	**/
/** *3 Region Selection                                              								        **/
/** *3.1 Regions as a function of pT                                     								    **/
/** *3.2 Regions as a function of ph                                       								    **/
/** *3.3 Regions as a function of ps                                        								**/
/** *3.4 Regions as a function of hs                                        								**/
/** *3.5 Regions as a function of p and rho                                 								**/
/**                                                    								     					**/
/** 4 Region Borders                                              			 								**/
/** 4.1 Boundary between region 1 and 3.                                    								**/
/** 4.2 Region 3. pSat_h and wsp_PSS                                        								**/
/** 4.3 Region boundary 1to3 and 3to2 as a functions of s                                 					**/
/**                                                   								     					**/
/** 5 Transport properties                                      								            **/
/** 5.1 Viscosity (IAPWS formulation 1985)                           								        **/
/** 5.2 Thermal Conductivity (IAPWS formulation 1985)                								        **/
/** 5.3 Surface Tension                                                								        **/
/***********************************************************************************************************/
#pragma region Units
/***********************************************************************************************************/

//private:
    static double toSIunit_p(double Ins);

//private:
    static double fromSIunit_p(double Ins);

//private:
    static double toSIunit_T(double Ins);

//private:
    static double fromSIunit_T(double Ins);

//private:
    static double toSIunit_h(double Ins);

//private:
    static double fromSIunit_h(double Ins);

//private:
    static double toSIunit_v(double Ins);

//private:
    static double fromSIunit_v(double Ins);

//private:
    static double toSIunit_d(double Ins);

//private:
    static double fromSIunit_d(double Ins);

//private:
    static double toSIunit_s(double Ins);

//private:
    static double fromSIunit_s(double Ins);

//private:
    static double toSIunit_u(double Ins);

//private:
    static double fromSIunit_u(double Ins);

//private:
    static double toSIunit_Cp(double Ins);

//private:
    static double fromSIunit_Cp(double Ins);

//private:
    static double toSIunit_Cv(double Ins);

//private:
    static double fromSIunit_Cv(double Ins);

//private:
    static double toSIunit_w(double Ins);

//private:
    static double fromSIunit_w(double Ins);

//private:
    static double toSIunit_tc(double Ins);

//private:
    static double fromSIunit_tc(double Ins);

//private:
    double toSIunit_st(double Ins);

//private:
    double fromSIunit_st(double Ins);

//private:
    double toSIunit_x(double Ins);

//private:
    double fromSIunit_x(double Ins);

//private:
    double toSIunit_vx(double Ins);

//private:
    double fromSIunit_vx(double Ins);

//private:
    double toSIunit_my(double Ins);

//private:
    double fromSIunit_my(double Ins);

#pragma endregion

/***********************************************************************************************************
# *1 Calling functions                                                                                      *
# ***********************************************************************************************************/

#pragma region * 1.1 Exposed functions


//[ExcelFunction(Description = "Давление насыщения[кгс/см²] по температуре[°C]", Category = "WSP - Давление воды и пара")]
//public:
    double wsp_PST(double T);





//[ExcelFunction(Description = "Давление насыщения[кгс/см²] по энтропии[ккал/кг°C]", Category = "WSP - Давление воды и пара")]

//public:
    double wsp_PSS(double s);





//[ExcelFunction(Description = "Давление насыщения[кгс/см²] по энтальпии[ккал/кг]", Category = "WSP - Давление воды и пара")]

//public:
    double wsp_PSH(double h);





//[ExcelFunction(Description = "Давление[кгс/см²] по энтальпии[ккал/кг] и энтропии[ккал/кг°C]", Category = "WSP - Давление воды и пара")]

//public:
    double wsp_PHS(double h, double s);











//[ExcelFunction(Description = "Температура насыщения[°C] по давлению[кгс/см²]", Category = "WSP - Температура воды и пара")]

//public:
    double wsp_TSP(double p);




//[ExcelFunction(Description = "Температура насыщения[°C] по энтропии[ккал/кг°C]", Category = "WSP - Температура воды и пара")]

//public:
    double wsp_TSS(double s);




//[ExcelFunction(Description = "Температура[°C] по давлению[кгс/см²] и энтальпии[ккал/кг] ", Category = "WSP - Температура воды и пара")]

//public:
    double wsp_TPH(double p, double h);




//[ExcelFunction(Description = "Температура[°C] по давлению[кгс/см²] и энтропии[ккал/кг°C]", Category = "WSP - Температура воды и пара")]

//public:
    double wsp_TPS(double p, double s);




//[ExcelFunction(Description = "Температура[°C] по энтальпии[ккал/кг] и энтропии[ккал/кг°C]", Category = "WSP - Температура воды и пара")]

//public:
    double wsp_THS(double h, double s);




//[ExcelFunction(Description = "Удельная энтальпия сухого насыщенного пара[ккал/кг] по давлению[кгс/см²]", Category = "WSP - Энтальпия воды и пара")]

//public:
    double wsp_HSSP(double p);




//[ExcelFunction(Description = "Удельная энтальпия кипящей воды[ккал/кг] по давлению[кгс/см²]", Category = "WSP - Энтальпия воды и пара")]

//public:
    double wsp_HSWP(double p);




//[ExcelFunction(Description = "Удельная энтальпия[ккал/кг] сухого насыщенного пара по температуре[°C]", Category = "WSP - Энтальпия воды и пара")]

//public:
    double wsp_HSST(double T);




//[ExcelFunction(Description = "Удельная энтальпия[ккал/кг] кипящей воды по температуре[°C]", Category = "WSP - Энтальпия воды и пара")]

//public:
    double wsp_HSWT(double T);




//[ExcelFunction(Description = "Удельная энтальпия[ккал/кг] по давлению[кгс/см²] и температуре[°C]", Category = "WSP - Энтальпия воды и пара")]

//public:
    double wsp_HPT(double p, double T);




//[ExcelFunction(Description = "Удельная энтальпия[ккал/кг] по давлению[кгс/см²] и энтропии[ккал/кг°C]", Category = "WSP - Энтальпия воды и пара")]

//public:
    double wsp_HPS(double p, double s);




//[ExcelFunction(Description = "Удельная энтальпия[ккал/кг] влажного пара по давлению[кгс/см²] и степени сухости", Category = "WSP - Энтальпия воды и пара")]

//public:
    double wsp_HSPX(double p, double x);




//[ExcelFunction(Description = "Удельная энтальпия[ккал/кг] влажного пара по температуре[°C] и степени сухости", Category = "WSP - Энтальпия воды и пара")]

//public:
    double wsp_HSTX(double T, double x);




//[ExcelFunction(Description = "Удельная энтальпия[ккал/кг] по давлению[кгс/см²] и плотности[кг/м³]", Category = "WSP - Энтальпия воды и пара")]

//public:
    double wsp_HPD(double p, double rho);




//[ExcelFunction(Description = "Удельный объем[м³/кг] сухого насыщенного пара по давлению[кгс/см²]", Category = "WSP - Удельный объем воды и пара")]

//public:
    double wsp_VSSP(double p);




//[ExcelFunction(Description = "Удельный объем[м³/кг] кипящей воды по давлению[кгс/см²]", Category = "WSP - Удельный объем воды и пара")]

//public:
    double wsp_VSWP(double p);




//[ExcelFunction(Description = "Удельный объем[м³/кг] сухого насыщенного пара по температуре[°C]", Category = "WSP - Удельный объем воды и пара")]

//public:
    double wsp_VSST(double T);




//[ExcelFunction(Description = "Удельный объем[м³/кг] кипящей воды по температуре[°C]", Category = "WSP - Удельный объем воды и пара")]

//public:
    double wsp_VSWT(double T);




//[ExcelFunction(Description = "Удельный объем[м³/кг] по давлению[кгс/см²] и температуре[°C]", Category = "WSP - Удельный объем воды и пара")]

//public:
    double wsp_VPT(double p, double T);




//[ExcelFunction(Description = "Удельный объем[м³/кг] по давлению[кгс/см²] и энтальпии[ккал/кг]", Category = "WSP - Удельный объем воды и пара")]

//public:
    double wsp_VPH(double p, double h);




//[ExcelFunction(Description = "Удельный объем[м³/кг] по давлению[кгс/см²] и энтропии[ккал/кг°C]", Category = "WSP - Удельный объем воды и пара")]

//public:
    double wsp_VPS(double p, double s);




//[ExcelFunction(Description = "Плотность[кг/м³] сухого насыщенного пара по давлению[кгс/см²]", Category = "WSP - Плотность воды и пара")]

//public:
    double wsp_DSSP(double p);




//[ExcelFunction(Description = "Плотность[кг/м³] кипящей воды по давлению[кгс/см²]", Category = "WSP - Плотность воды и пара")]

//public:
    double wsp_DSWP(double p);




//[ExcelFunction(Description = "Плотность[кг/м³] сухого насыщенного пара по температуре[°C]", Category = "WSP - Плотность воды и пара")]

//public:
    double wsp_DSST(double T);




//[ExcelFunction(Description = "Плотность[кг/м³] кипящей воды по температуре[°C]", Category = "WSP - Плотность воды и пара")]

//public:
    double wsp_DSWT(double T);




//[ExcelFunction(Description = "Плотность[кг/м³] воды по давлению[кгс/см²] и температуре[°C]", Category = "WSP - Плотность воды и пара")]

//public:
    double wsp_DPT(double p, double T);




//[ExcelFunction(Description = "Плотность[кг/м³] по давлению[кгс/см²] и энтальпии[ккал/кг]", Category = "WSP - Плотность воды и пара")]

//public:
    double wsp_DPH(double p, double h);




//[ExcelFunction(Description = "Плотность[кг/м³] по давлению[кгс/см²] и энтропии[ккал/кг°C]", Category = "WSP - Плотность воды и пара")]

//public:
    double wsp_DPS(double p, double s);




//[ExcelFunction(Description = "Удельная энтропия[ккал/кг°C] сухого насыщенного пара по давлению[кгс/см²]", Category = "WSP - Энтропия воды и пара")]

//public:
    double wsp_SSSP(double p);




//[ExcelFunction(Description = "Удельная энтропия[ккал/кг°C] кипящей воды по давлению[кгс/см²]", Category = "WSP - Энтропия воды и пара")]

//public:
    double wsp_SSWP(double p);




//[ExcelFunction(Description = "Удельная энтропия[ккал/кг°C] сухого насыщенного пара по температуре[°C]", Category = "WSP - Энтропия воды и пара")]

//public:
    double wsp_SSST(double T);




//[ExcelFunction(Description = "Удельная энтропия[ккал/кг°C] кипящей воды по температуре[°C]", Category = "WSP - Энтропия воды и пара")]

//public:
    double wsp_SSWT(double T);




//[ExcelFunction(Description = "Удельная энтропия[ккал/кг°C] по давлению[кгс/см²] и температуре[°C]", Category = "WSP - Энтропия воды и пара")]

//public:
    double wsp_SPT(double p, double T);




//[ExcelFunction(Description = "Удельная энтропия[ккал/кг°C] по давлению[кгс/см²] и энтальпии[ккал/кг]", Category = "WSP - Энтропия воды и пара")]

//public:
    double wsp_SPH(double p, double h);




//[ExcelFunction(Description = "Удельная внутренняя энергия[ккал/кг] сухого насыщенного пара по давлению[кгс/см²]", Category = "WSP - Внутренняя энергия воды и пара")]

//public:
    double wsp_USSP(double p);




//[ExcelFunction(Description = "Удельная внутренняя энергия[ккал/кг] кипящей воды по давлению[кгс/см²]", Category = "WSP - Внутренняя энергия воды и пара")]

//public:
    double wsp_USWP(double p);




//[ExcelFunction(Description = "Удельная внутренняя энергия[ккал/кг] сухого насыщенного пара по температуре[°C]", Category = "WSP - Внутренняя энергия воды и пара")]

//public:
    double wsp_USST(double T);




//[ExcelFunction(Description = "Удельная внутренняя энергия[ккал/кг] кипящей воды по температуре[°C]", Category = "WSP - Внутренняя энергия воды и пара")]

//public:
    double wsp_USWT(double T);




//[ExcelFunction(Description = "Удельная внутренняя энергия[ккал/кг] по давлению[кгс/см²] и температуре[°C]", Category = "WSP - Внутренняя энергия воды и пара")]

//public:
    double wsp_UPT(double p, double T);




//[ExcelFunction(Description = "Удельная внутренняя энергия[ккал/кг] по давлению[кгс/см²] и энтальпии[ккал/кг]", Category = "WSP - Внутренняя энергия воды и пара")]

//public:
    double wsp_UPH(double p, double h);




//[ExcelFunction(Description = "Удельная внутренняя энергия[ккал/кг] по давлению[кгс/см²] и энтропии[ккал/кг°C]", Category = "WSP - Внутренняя энергия воды и пара")]

//public:
    double wsp_UPS(double p, double s);




//[ExcelFunction(Description = "Изобарная теплоемкость[ккал/кг°C] сухого насыщенного пара по давлению[кгс/см²]", Category = "WSP - Теплоемкость воды и пара")]

//public:
    double wsp_CPSSP(double p);




//[ExcelFunction(Description = "Изобарная теплоемкость[ккал/кг°C] кипящей воды по давлению[кгс/см²]", Category = "WSP - Теплоемкость воды и пара")]

//public:
    double wsp_CPSWP(double p);




//[ExcelFunction(Description = "Изобарная теплоемкость[ккал/кг°C] сухого насыщенного пара по температуре[°C]", Category = "WSP - Теплоемкость воды и пара")]

//public:
    double wsp_CPSST(double T);




//[ExcelFunction(Description = "Изобарная теплоемкость[ккал/кг°C] кипящей воды по температуре[°C]", Category = "WSP - Теплоемкость воды и пара")]

//public:
    double wsp_CPSWT(double T);




//[ExcelFunction(Description = "Изобарная теплоемкость[ккал/кг°C] по давлению[кгс/см²] и температуре[°C]", Category = "WSP - Теплоемкость воды и пара")]

//public:
    double wsp_CPPT(double p, double T);




//[ExcelFunction(Description = "Изобарная теплоемкость[ккал/кг°C] по давлению[кгс/см²] и энтальпии[ккал/кг]", Category = "WSP - Теплоемкость воды и пара")]

//public:
    double wsp_CPPH(double p, double h);




//[ExcelFunction(Description = "Изобарная теплоемкость[ккал/кг°C] по давлению[кгс/см²] и энтропии[ккал/кг°C]", Category = "WSP - Теплоемкость воды и пара")]

//public:
    double wsp_CPPS(double p, double s);




//[ExcelFunction(Description = "Изохорная теплоемкость[ккал/кг°C] сухого насыщенного пара по давлению[кгс/см²]", Category = "WSP - Теплоемкость воды и пара")]

//public:
    double wsp_CVSSP(double p);




//[ExcelFunction(Description = "Изохорная теплоемкость[ккал/кг°C] кипящей воды по давлению[кгс/см²]", Category = "WSP - Теплоемкость воды и пара")]

//public:
    double wsp_CVSWP(double p);




//[ExcelFunction(Description = "Изохорная теплоемкость[ккал/кг°C] сухого насыщенного пара по температуре[°C]", Category = "WSP - Теплоемкость воды и пара")]

//public:
    double wsp_CVSST(double T);




//[ExcelFunction(Description = "Изохорная теплоемкость[ккал/кг°C] кипящей воды по температуре[°C]", Category = "WSP - Теплоемкость воды и пара")]

//public:
    double wsp_CVSWT(double T);




//[ExcelFunction(Description = "Изохорная теплоемкость[ккал/кг°C] по давлению[кгс/см²] и температуре[°C]", Category = "WSP - Теплоемкость воды и пара")]

//public:
    double wsp_CVPT(double p, double T);




//[ExcelFunction(Description = "Изохорная теплоемкость[ккал/кг°C] по давлению[кгс/см²] и энтальпии[ккал/кг]", Category = "WSP - Теплоемкость воды и пара")]

//public:
    double wsp_CVPH(double p, double h);




//[ExcelFunction(Description = "Изохорная теплоемкость[ккал/кг°C] по давлению[кгс/см²] и энтропии[ккал/кг°C]", Category = "WSP - Теплоемкость воды и пара")]

//public:
    double wsp_CVPS(double p, double s);






//[ExcelFunction(Description = "Скорость звука[м/с] в сухом насыщенном паре по давлению[кгс/см²]", Category = "WSP - Скорость звука в воде и паре")]

//public:
    double wsp_WSSP(double p);




//[ExcelFunction(Description = "Скорость звука[м/с] в кипящей воде по давлению[кгс/см²]", Category = "WSP - Скорость звука в воде и паре")]

//public:
    double wsp_WSWP(double p);




//[ExcelFunction(Description = "Скорость звука[м/с] в сухом насыщенном паре по температуре[°C]", Category = "WSP - Скорость звука в воде и паре")]

//public:
    double wsp_WSST(double T);




//[ExcelFunction(Description = "Скорость звука[м/с] в кипящей воде по температуре[°C]", Category = "WSP - Скорость звука в воде и паре")]

//public:
    double wsp_WSWT(double T);




//[ExcelFunction(Description = "Скорость звука[м/с] по давлению[кгс/см²] и температуре[°C]", Category = "WSP - Скорость звука в воде и паре")]

//public:
    double wsp_WPT(double p, double T);




//[ExcelFunction(Description = "Скорость звука[м/с] по давлению[кгс/см²] и энтальпии[ккал/кг]", Category = "WSP - Скорость звука в воде и паре")]

//public:
    double wsp_WPH(double p, double h);




//[ExcelFunction(Description = "Скорость звука[м/с] по давлению[кгс/см²] и энтропии[ккал/кг°C]", Category = "WSP - Скорость звука в воде и паре")]

//public:
    double wsp_WPS(double p, double s);




//[ExcelFunction(Description = "Степень сухости[-] по давлению[кгс/см²] и энтальпии[ккал/кг]", Category = "WSP - Степень сухости воды и пара")]

//public:
    double wsp_XPH(double p, double h);



//[ExcelFunction(Description = "Степень сухости[-] по давлению[кгс/см²] и энтропии[ккал/кг]", Category = "WSP - Степень сухости воды и пара")]

//public:
    double wsp_XPS(double p, double s);



//[ExcelFunction(Description = "Объемная степень сухости[-] по давлению[кгс/см²] и энтальпии[ккал/кг]", Category = "WSP - Степень сухости воды и пара")]

//public:
    double wsp_VXPH(double p, double h);



//[ExcelFunction(Description = "Объемная степень сухости[-] по давлению[кгс/см²] и энтропии[ккал/кг]", Category = "WSP - Степень сухости воды и пара")]

//public:
    double wsp_VXPS(double p, double s);







//[ExcelFunction(Description = "Динамическая вязкость[Па·с] по давлению[кгс/см²] и температуре[°C]", Category = "WSP - Вязкость воды и пара")]

//public:
    double wsp_DYNVISPT(double p, double T);



//[ExcelFunction(Description = "Динамическая вязкость[Па·с] по давлению[кгс/см²] и энтальпии[ккал/кг]", Category = "WSP - Вязкость воды и пара")]

//public:
    double wsp_DYNVISPH(double p, double h);



//[ExcelFunction(Description = "Динамическая вязкость[Па·с] по давлению[кгс/см²] и энтропии[ккал/кг°C]", Category = "WSP - Вязкость воды и пара")]

//public:
    double wsp_DYNVISPS(double p, double s);








//[ExcelFunction(Description = "Поверхностное натяжение воды[н/м] по температуре[°C]", Category = "WSP - Поверхностное натяжение воды")]

//public:
    double wsp_SURFTENT(double T);
//[ExcelFunction(Description = "Поверхностное натяжение воды[н/м] по давлению[кгс/см²]", Category = "WSP - Поверхностное натяжение воды")]

//public:
    double wsp_SURFTENP(double p);




//[ExcelFunction(Description = "Теплопроводность[Вт/(м·К)] сухого насыщенного пара по давлению[кгс/см²]", Category = "WSP - Теплопроводность воды и пара")]

//public:
    double wsp_THERMCONDSSP(double p);



//[ExcelFunction(Description = "Теплопроводность[Вт/(м·К)] кипящей воды по давлению[кгс/см²]", Category = "WSP - Теплопроводность воды и пара")]

//public:
    double wsp_THERMCONDSWP(double p);



//[ExcelFunction(Description = "Теплопроводность[Вт/(м·К)] сухого насыщенного пара по температуре[°C]", Category = "WSP - Теплопроводность воды и пара")]

//public:
    double wsp_THERMCONDSST(double T);



//[ExcelFunction(Description = "Теплопроводность[Вт/(м·К)] кипящей воды по температуре[°C]", Category = "WSP - Теплопроводность воды и пара")]

//public:
    double wsp_THERMCONDSWT(double T);



//[ExcelFunction(Description = "Теплопроводность[Вт/(м·К)] по давлению[кгс/см²] и температуре[°C]", Category = "WSP - Теплопроводность воды и пара")]

//public:
    double wsp_THERMCONDPT(double p, double T);



//[ExcelFunction(Description = "Теплопроводность[Вт/(м·К)] по давлению[кгс/см²] и энтальпии[ккал/кг]", Category = "WSP - Теплопроводность воды и пара")]

//public:
    double wsp_THERMCONDPH(double p, double h);



//[ExcelFunction(Description = "Теплопроводность[Вт/(м·К)] по давлению[кгс/см²] и энтропии[ккал/кг°C]", Category = "WSP - Теплопроводность воды и пара")]

//public:
    double wsp_THERMCONDPS(double p, double s);




//[ExcelFunction(Description = "Регион IAPWS-IF97 по давлению[кгс/см²] и энтропии[ккал/кг°C]", Category = "WSP - Регионы воды и пара")]

//public:
    int wsp_Region_PS(double p, double s);

//[ExcelFunction(Description = "Регион IAPWS-IF97 по давлению[кгс/см²] и энтропии[ккал/кг°C]", Category = "WSP - Регионы воды и пара")]

//public:
    int wsp_Region_PS1(double p, double s);

#pragma endregion

#pragma region 1.1 constants
// *1.1 Constants
//private:
    const double R = 0.461526; // kJ/(kg K)
//private:
    const double tc = 647.096; // K
//private:
    const double pc = 22.064; // MPa
//private:
    const double rhoc = 322.0; // kg/m3

//# PMIN = _PST(273.15)   # Minimum pressure
//private:
    const double PMIN = 0.000611212677444;
//# PST_623 = _PST(623.15)  # P Saturation at 623.15 K, boundary region 1-3
//private:
    const double PST_623 = 16.5291642526;

#pragma endregion
/************************************************************************************************************/
#pragma region 1.2 Temperature

//private:
    double _TSP(double p);


//private:
    double _TSS(double s);


//private:
    double _TPH(double p, double h);


//private:
    double _TPS(double p, double s);


//private:
    double _THS(double h, double s);

#pragma endregion
/***********************************************************************************************************/

#pragma region * 1.3 Pressure(p)

//private:
    double _PST(double T);


//private:
    double _PSS(double s);

//private:
    double _PSS1(double s);


//private:
    double _PHS(double h, double s);

#pragma endregion
/***********************************************************************************************************/
#pragma region * 1.4 Enthalpy(h)

//private:
    double _HSSP(double p);


//private:
    double _HSWP(double p);


//private:
    double _HSST(double T);


//private:
    double _HSWT(double T);

//private:
    double _HPT(double p, double T);


//private:
    double _HPS(double p, double s);

//private:
    double _HSPX(double p, double x);


//private:
    double _HSTX(double T, double x);

//private:
    double _HPD(double p, double rho);


//private:
    double _H1PS(double p, double s);

//private:
    double _H2PS(double p, double s);

//private:
    double _H3PS(double p, double s);

//private:
    double _H4PS(double p, double s);

//private:
    double _H5PS(double p, double s);


//private:
    double _H1PD(double p, double rho);

//private:
    double _H2PD(double p, double rho);

//private:
    double _H3PD(double p, double rho);

//private:
    double _H5PD(double p, double rho);

//private:
    double _H4PD(double p, double rho);

#pragma endregion
/***********************************************************************************************************/
#pragma region * 1.5 Specific Volume(v)

//private:
    double _VSSP(double p);

//private:
    double _VSWP(double p);

//private:
    double _VSST(double T);


//private:
    double _VSWT(double T);


//private:
    double _VPT(double p, double T);

//private:
    double _VPH(double p, double h);

//private:
    double _VPS(double p, double s);


//private:
    double _V3PT(double p, double t);


//private:
    double _V1PH(double p, double h);

//private:
    double _V2PH(double p, double h);

//private:
    double _V5PH(double p, double h);


//private:
    double _V4PH(double p, double h);

//private:
    double _V1PS(double p, double s);

//private:
    double _V2PS(double p, double s);

//private:
    double _V5PS(double p, double s);

//private:
    double _V4PS(double p, double s);

#pragma endregion



/***********************************************************************************************************/
#pragma region * 1.6 Density(rho)

//private:
    double _DSSP(double p);

//private:
    double _DSWP(double p);


//private:
    double _DSWT(double T);


//private:
    double _DSST(double T);


//private:
    double _DPT(double p, double T);


//private:
    double _DPH(double p, double h);


//private:
    double _DPS(double p, double s);


#pragma endregion



/***********************************************************************************************************/
#pragma region * 1.7 Specific entropy(s)

//private:
    double _SSSP(double p);

//private:
    double _SSWP(double p);

//private:
    double _SSST(double T);

//private:
    double _SSWT(double T);

//private:
    double _SPT(double p, double T);


//private:
    double _SPH(double p, double h);


//private:
    double _S3PT(double p, double T);

//private:
    double _S1PH(double p, double h);

//private:
    double _S2PH(double p, double h);

//private:
    double _S3PH(double p, double h);

//private:
    double _S5PH(double p, double h);


//private:
    double _S4PH(double p, double h);

#pragma endregion
/***********************************************************************************************************/
#pragma region * 1.8 Specific internal energy(u)

//private:
    double _USSP(double p);

//private:
    double _USWP(double p);

//private:
    double _USST(double T);


//private:
    double _USWT(double T);


//private:
    double _UPT(double p, double T);

//private:
    double _UPH(double p, double h);

//private:
    double _UPS(double p, double s);


#pragma endregion
/***********************************************************************************************************/
#pragma region * 1.9 Specific isobaric heat capacity(Cp)

//private:
    double _CPSSP(double p);


//private:
    double _CPSWP(double p);

//private:
    double _CPSST(double T);

//private:
    double _CPSWT(double T);

//private:
    double _CPPT(double p, double T);

//private:
    double _CPPH(double p, double h);

//private:
    double _CPPS(double p, double s);

//private:
    double _CP3PT(double p, double T);

//private:
    double _CP1PH(double p, double h);

//private:
    double _CP2PH(double p, double h);

//private:
    double _CP3PH(double p, double h);

//private:
    double _CP5PH(double p, double h);


//private:
    double _CP1PS(double p, double s);

//private:
    double _CP2PS(double p, double s);

//private:
    double _CP3PS(double p, double s);

//private:
    double _CP5PS(double p, double s);

#pragma endregion


/***********************************************************************************************************/


#pragma region * 1.10 Specific isochoric heat capacity(Cv)

//private:
    double _CVSSP(double p);


//private:
    double _CVSWP(double p);

//private:
    double _CVSST(double T);

//private:
    double _CVSWT(double T);

//private:
    double _CVPT(double p, double T);

//private:
    double _CVPH(double p, double h);

//private:
    double _CVPS(double p, double s);


//private:
    double _CV3PT(double p, double t);


//private:
    double _CV1PH(double p, double h);

//private:
    double _CV2PH(double p, double h);

//private:
    double _CV3PH(double p, double h);

//private:
    double _CV5PH(double p, double h);


//private:
    double _CV1PS(double p, double s);

//private:
    double _CV2PS(double p, double s);

//private:
    double _CV3PS(double p, double s);

//private:
    double _CV5PS(double p, double s);

#pragma endregion



/***********************************************************************************************************/
#pragma region * 1.11 Speed of sound

//private:
    double _WSSP(double p);

//private:
    double _WSWP(double p);

//private:
    double _WSST(double T);

//private:
    double _WSWT(double T);

//private:
    double _WPT(double p, double T);


//private:
    double _WPH(double p, double h);


//private:
    double _WPS(double p, double s);


//private:
    double _W3PT(double p, double T);


//private:
    double _W1PH(double p, double h);

//private:
    double _W2PH(double p, double h);

//private:
    double _W3PH(double p, double h);

//private:
    double _W5PH(double p, double h);


//private:
    double _W1PS(double p, double s);

//private:
    double _W2PS(double p, double s);

//private:
    double _W3PS(double p, double s);

//private:
    double _W5PS(double p, double s);

#pragma endregion
/***********************************************************************************************************/
#pragma region * 1.12 Viscosity

//private:
    double _DYNVISPT(double p, double T);


//private:
    double _DYNVISPH(double p, double h);


//private:
    double _DYNVISPS(double p, double s);

#pragma endregion
/***********************************************************************************************************/
#pragma region * 1.13 Prandtl
//TODO
#pragma endregion
/***********************************************************************************************************/
#pragma region * 1.14 Kappa
//TODO
#pragma endregion
/***********************************************************************************************************/
#pragma region * 1.15 Surface tension


#pragma endregion



/***********************************************************************************************************/
#pragma region * 1.16 Thermal conductivity

//private:
    double _THERMCONDSSP(double p);

//private:
    double _THERMCONDSWP(double p);

//private:
    double _THERMCONDSST(double T);

//private:
    double _THERMCONDSWT(double T);

//private:
    double _THERMCONDPT(double p, double T);

//private:
    double _THERMCONDPH(double p, double h);

//private:
    double _THERMCONDPS(double p, double s);


#pragma endregion


/***********************************************************************************************************/
#pragma region * 1.17 Vapour fraction

//private:
    double _XPH(double p, double h);

//private:
    double _XPS(double p, double s);

#pragma endregion
/***********************************************************************************************************/
#pragma region * 1.18 Vapour Volume Fraction

//private:
    double _VXPH(double p, double h);

//private:
    double _VXPS(double p, double s);

#pragma endregion


/***********************************************************************************************************/
/**                             2 IAPWS if 97 Calling functions                                           **/
/***********************************************************************************************************/

#pragma region * 2.1 Functions for region 1

//private:
    double _V1PT(double p, double T);


//private:
    double _H1PT(double p, double T);


//private:
    double _U1PT(double p, double T);

//private:
    double _S1PT(double p, double T);

//private:
    double _CP1PT(double p, double T);

//private:
    double _CV1PT(double p, double T);

//private:
    double _W1PT(double p, double T);

//private:
    double _T1PH(double p, double h);


//private:
    double _T1HS(double h, double s);

//private:
    double _T1PS(double p, double s);

//private:
    double _P1HS(double h, double s);


//private:
    double _T1PD(double p, double rho);

#pragma endregion
// # ***********************************************************************************************************
#pragma region * 2.2 Functions for region 2

//private:
    double _V2PT(double p, double T);

//private:
    double _H2PT(double p, double T);

//private:
    double _U2PT(double p, double T);

//private:
    double _S2PT(double p, double T);

//private:
    double _CP2PT(double p, double T);

//private:
    double _CV2PT(double p, double T);

//private:
    double _W2PT(double p, double T);

//private:
    double _T2PH(double p, double h);

//private:
    double _T2HS(double h, double s);


//private:
    double _T2PS(double p, double s);

//private:
    double _P2HS(double h, double s);

//private:
    double _T2PD(double p, double rho);

#pragma endregion
// ***********************************************************************************************************
#pragma region * 2.3 Functions for region 3

//private:
    double _P3DT(double rho, double T);

//private:
    double _U3DT(double rho, double T);

//private:
    double _H3DT(double rho, double T);

//private:
    double _S3DT(double rho, double T);

//private:
    double _CP3DT(double rho, double T);

//private:
    double _CV3DT(double rho, double T);

//private:
    double _W3DT(double rho, double T);

//private:
    double _T3PH(double p, double h);

//private:
    double _T3HS(double h, double s);


//private:
    double _V3PH(double p, double h);

//private:
    double _T3PS(double p, double s);

//private:
    double _V3PS(double p, double s);

//private:
    double _P3HS(double h, double s);

//private:
    double _H3PT(double p, double T);

//private:
    double _T3PD(double p, double rho);

#pragma endregion
/***********************************************************************************************************/
#pragma region * 2.4 Functions for region 4

//private:
    double _PB4T(double T);
/*//private: double _T4P(double p)// from VBA
;
*/
//private:
    double _T4P(double p) // from Python module
    ;

//private:
    double _H4S(double s);

//private:
    double _P4S(double s);

//private:
    double _H4SWP(double p);


//private:
    double _H4SSP(double p);

//private:
    double _X4PH(double p, double h);


//private:
    double _X4PS(double p, double s);

//private:
    double _T4HS(double h, double s);

//private:
    double _P4HS(double h, double s);

#pragma endregion
// ***********************************************************************************************************
#pragma region * 2.5 Functions for region 5

//private:
    double _H5PT(double p, double T);

//private:
    double _V5PT(double p, double T);


//private:
    double _U5PT(double p, double T);


//private:
    double _CP5PT(double p, double T);

//private:
    double _S5PT(double p, double T);

//private:
    double _CV5PT(double p, double T);

//private:
    double _W5PT(double p, double T);

//private:
    double _T5PH(double p, double h);

//private:
    double _T5PS(double p, double s);

//private:
    double _T5PD(double p, double rho);

#pragma endregion
// ***********************************************************************************************************
// *3 Region Selection
// ***********************************************************************************************************
#pragma region * 3.1 Regions as a function of pT

//private:
    int _Region_PT(double p, double T);

#pragma endregion
// ***********************************************************************************************************
#pragma region * 3.2 Regions as a function of ph

//private:
    int _Region_PH(double p, double h);

//private:
    int _Region_PH1(double P, double h);

#pragma endregion
// ***********************************************************************************************************
#pragma region * 3.3 Regions as a function of ps

//private:
    int _Region_PS1(double p, double s) // Из VBA проекта
    ;

//private:
    int _Region_PS(double p, double s) // Из Python модуля
    ;

#pragma endregion
// ***********************************************************************************************************
#pragma region * 3.4 Regions as a function of hs

//private:
    int _Region_HS(double h, double s);
/*
//private: int _Region_HS(double h, double s);
        */
#pragma endregion
// ***********************************************************************************************************
#pragma region * 3.5 Regions as a function of p and rho

//private:
    int _Region_PD(double p, double rho);

#pragma endregion
// ***********************************************************************************************************
// *4 Region Borders
// ***********************************************************************************************************
// ***********************************************************************************************************
#pragma region * 4.1 Boundary between region 2 and 3.

//private:
    double _PB23T(double T);


//private:
    double _TB23P(double p);

#pragma endregion
// ***********************************************************************************************************
#pragma region * 4.2 Region 3. pSat = F(h) and pSat = F(s)

//private:
    double _PS3H(double h);

//private:
    double _PS3S(double s);

#pragma endregion
// ***********************************************************************************************************
#pragma region 4.3 Region boundary 1to3 and 3to2 as a functions of s

//private:
    double _HB13S(double s);

//private:
    double _TB23HS(double h, double s);

//private:
    double _PSH(double h);


#pragma endregion
// ***********************************************************************************************************
// *5 Transport properties
// ***********************************************************************************************************
#pragma region * 5.1 Viscosity(IAPWS formulation 1985, Revised 2003)

// ***********************************************************************************************************
//private:
    double _DVPT(double p, double T);

//private:
    double _DVPH(double p, double h);

#pragma endregion
/***********************************************************************************************************/
#pragma region * 5.2 Thermal Conductivity(IAPWS formulation 1985)

//private:
    double _THERMCONDPTD(double p, double T, double rho);

#pragma endregion
/***********************************************************************************************************/
#pragma region 5.3 Surface Tension

//private:
    double _SURFTENT(double T);

#pragma endregion


}

#endif //CMAKE_GOOGLETEST_PYBIND11_EXAMPLE_WSPTABLES_P_H
