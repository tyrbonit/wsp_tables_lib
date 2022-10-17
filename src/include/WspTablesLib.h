
#ifndef CMAKE_GOOGLETEST_PYBIND11_EXAMPLE_WSPTABLESLIB_H
#define CMAKE_GOOGLETEST_PYBIND11_EXAMPLE_WSPTABLESLIB_H

namespace wsptables {



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


}

#endif //CMAKE_GOOGLETEST_PYBIND11_EXAMPLE_WSPTABLESLIB_H
