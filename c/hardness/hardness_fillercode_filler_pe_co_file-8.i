extern unsigned long __VERIFIER_nondet_ulong(void);
extern long __VERIFIER_nondet_long(void);
extern unsigned char __VERIFIER_nondet_uchar(void);
extern char __VERIFIER_nondet_char(void);
extern unsigned short __VERIFIER_nondet_ushort(void);
extern short __VERIFIER_nondet_short(void);
extern float __VERIFIER_nondet_float(void);
extern double __VERIFIER_nondet_double(void);
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch8Filler_PE_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 999999999.675;
signed long int var_1_4 = -5;
float var_1_5 = 7.875;
float var_1_6 = 99.04;
signed long int var_1_7 = -2;
signed long int var_1_8 = 64;
unsigned long int var_1_9 = 1;
double var_1_10 = 63.25;
unsigned char var_1_11 = 0;
unsigned long int var_1_12 = 16;
float var_1_13 = 24.5;
float var_1_14 = 127.8;
float var_1_15 = 0.5;
float var_1_16 = 7.25;
signed short int var_1_17 = -256;
signed short int var_1_19 = 10;
signed short int var_1_20 = 32;
signed short int var_1_21 = 5;
signed short int var_1_22 = -4;
signed long int var_1_23 = 256;
unsigned char var_1_24 = 0;
unsigned long int var_1_25 = 4;
signed long int var_1_26 = 128;
signed short int var_1_27 = -4;
unsigned char var_1_31 = 1;
signed short int var_1_32 = -256;
unsigned short int var_1_33 = 2;
unsigned short int var_1_34 = 32;
unsigned short int var_1_35 = 25;
signed long int var_1_36 = -1;
float var_1_38 = 256.7;
float var_1_39 = 2.2;
unsigned long int var_1_40 = 10;
unsigned long int var_1_41 = 0;
double var_1_42 = 100.5;
double var_1_43 = 16.5;
double var_1_44 = 4.875;
signed char var_1_45 = 8;
signed long int var_1_46 = 25;
signed char var_1_47 = 5;
signed char var_1_48 = 10;
signed char var_1_49 = -50;
unsigned long int last_1_var_1_9 = 1;
float last_1_var_1_13 = 24.5;
signed long int last_1_var_1_23 = 256;
void initially(void) {
}
void step(void) {
                                         if ( ((last_1_var_1_9) == ( ((last_1_var_1_23) % (var_1_4))))) {
                                          var_1_1 = (
                                           ((
    var_1_5
   ) - (
    var_1_6
   ))
  );
 }
                              if ( ((var_1_1) >= (var_1_6))) {
                               var_1_7 = (
   var_1_8
  );
 }
                                         if ( (( (( ((var_1_6) * (var_1_5))) / (var_1_10))) > (last_1_var_1_13))) {
                                           if (var_1_11) {
                                            var_1_9 = (
    var_1_12
   );
  } else {
                                            var_1_9 = (
    0u
   );
  }
 }
                                if ( (( ((var_1_4) * (var_1_9))) < (var_1_12))) {
                                 var_1_17 = (
                                  ((
                                   ((
     var_1_19
    ) - (
                                    ((
      var_1_20
     ) + (
      var_1_21
     ))
    ))
   ) + (
    var_1_22
   ))
  );
 } else {
                                 if ( ((var_1_20) >= (32))) {
                                  if (var_1_11) {
                                   var_1_17 = (
     100
    );
   } else {
                                   var_1_17 = (
     var_1_20
    );
   }
  }
 }
                                var_1_24 = (
  2
 );
                                var_1_25 = (
  var_1_21
 );
                                var_1_26 = (
  var_1_8
 );
 signed long int stepLocal_2 = var_1_7;
 unsigned long int stepLocal_1 = var_1_9;
                                if ( ((var_1_19) < (stepLocal_2))) {
                                 if ( ((var_1_25) >= (stepLocal_1))) {
                                  if ( ((var_1_6) < (var_1_15))) {
                                   var_1_23 = (
     var_1_21
    );
   }
  }
 } else {
                                 var_1_23 = (
   var_1_17
  );
 }
 signed long int stepLocal_0 = 128;
                                if ( ((stepLocal_0) <= (var_1_23))) {
                                 if (var_1_11) {
                                  var_1_13 = (
                                   ((
     var_1_14
    ) + (
                                    ((((( ((((( 3.4f )) > (( var_1_15 ))) ? (( 3.4f )) : (( var_1_15 )))) )) < (( var_1_16 ))) ? (( ((((( 3.4f )) > (( var_1_15 ))) ? (( 3.4f )) : (( var_1_15 )))) )) : (( var_1_16 ))))
    ))
   );
  } else {
                                  if ( ((var_1_1) < (var_1_16))) {
                                   var_1_13 = (
     var_1_6
    );
   } else {
                                   var_1_13 = (
     var_1_15
    );
   }
  }
 } else {
                                 var_1_13 = (
   var_1_5
  );
 }
                   if ( ((var_1_25) != ( ((var_1_9) + (var_1_23))))) {
                    if (var_1_31) {
                     var_1_27 = (
                     ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))
   );
  }
 } else {
                    var_1_27 = (
   var_1_32
  );
 }
                   if (var_1_31) {
                    var_1_33 = (
                     ((((( var_1_34 )) > (( var_1_35 ))) ? (( var_1_34 )) : (( var_1_35 ))))
  );
 }
                   if ( ((16) < (var_1_26))) {
                    if ( ((var_1_34) <= (var_1_9))) {
                     if ( ((var_1_35) < ( ((var_1_26) ^ (var_1_23))))) {
                      var_1_36 = (
     var_1_9
    );
   }
  }
 }
                   var_1_38 = (
  var_1_39
 );
                   if ( ((var_1_32) <= (var_1_26))) {
                    if ( ((var_1_39) < (255.2f))) {
                     if ( (( ((16) <= (var_1_23))) && ( ((var_1_32) >= (var_1_26))))) {
                      var_1_40 = (
                       ((((( var_1_34 )) > (( var_1_41 ))) ? (( var_1_34 )) : (( var_1_41 ))))
    );
   }
  }
 }
                   if ( ((var_1_41) < ( ((((( (((((var_1_34)) > ((var_1_25))) ? ((var_1_34)) : ((var_1_25)))))) > ((var_1_35))) ? (( (((((var_1_34)) > ((var_1_25))) ? ((var_1_34)) : ((var_1_25)))))) : ((var_1_35))))))) {
                    var_1_42 = (
   var_1_39
  );
 } else {
                    if ( ((var_1_1) <= (var_1_39))) {
                     var_1_42 = (
                      ((((((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)))) < 0 ) ? -(((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)))) : (((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39))))))
   );
  } else {
                     if ( ((var_1_39) <= (var_1_1))) {
                      var_1_42 = (
                       ((((( (( var_1_43 ) - ( var_1_44 )) )) > (( var_1_39 ))) ? (( (( var_1_43 ) - ( var_1_44 )) )) : (( var_1_39 ))))
    );
   }
  }
 }
                   if ( (( ((var_1_32) % (var_1_46))) < (var_1_25))) {
                    var_1_45 = (
                     ((
                      ((
     var_1_47
    ) - (
     var_1_48
    ))
   ) + (
    var_1_49
   ))
  );
 } else {
                    var_1_45 = (
   var_1_49
  );
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 assume_abort_if_not(var_1_4 != 0);
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -2147483647);
 assume_abort_if_not(var_1_8 <= 2147483646);
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 assume_abort_if_not(var_1_10 != 0.0F);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 4294967294);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -461168.6018427383000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -461168.6018427383000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -461168.6018427383000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 16383);
 var_1_20 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 8192);
 var_1_21 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 8191);
 var_1_22 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_22 >= -16383);
 assume_abort_if_not(var_1_22 <= 16383);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 1);
 var_1_32 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_32 >= -32766);
 assume_abort_if_not(var_1_32 <= 32766);
 var_1_34 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 65534);
 var_1_35 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 65534);
 var_1_39 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_39 >= -922337.2036854766000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854766000e+12F && var_1_39 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 4294967294);
 var_1_43 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854766000e+12F && var_1_43 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_44 >= 0.0F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854766000e+12F && var_1_44 >= 1.0e-20F ));
 var_1_46 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_46 >= -2147483648);
 assume_abort_if_not(var_1_46 <= 2147483647);
 assume_abort_if_not(var_1_46 != 0);
 var_1_47 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 63);
 var_1_48 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_48 >= 0);
 assume_abort_if_not(var_1_48 <= 63);
 var_1_49 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_49 >= -63);
 assume_abort_if_not(var_1_49 <= 63);
}
void updateLastVariables(void) {
 last_1_var_1_9 = var_1_9;
 last_1_var_1_13 = var_1_13;
 last_1_var_1_23 = var_1_23;
}
int property(void) {
 if ( ((last_1_var_1_9) == ( ((last_1_var_1_23) % (var_1_4))))) {
 }
 if ( ((var_1_1) >= (var_1_6))) {
 }
 if ( (( (( ((var_1_6) * (var_1_5))) / (var_1_10))) > (last_1_var_1_13))) {
  if (var_1_11) {
  } else {
  }
 }
 if ( ((128) <= (var_1_23))) {
  if (var_1_11) {
  } else {
   if ( ((var_1_1) < (var_1_16))) {
   } else {
   }
  }
 } else {
 }
 if ( (( ((var_1_4) * (var_1_9))) < (var_1_12))) {
 } else {
  if ( ((var_1_20) >= (32))) {
   if (var_1_11) {
   } else {
   }
  }
 }
 if ( ((var_1_19) < (var_1_7))) {
  if ( ((var_1_25) >= (var_1_9))) {
   if ( ((var_1_6) < (var_1_15))) {
   }
  }
 } else {
 }
 return ((
             ((
              ((
               ((
                ((
                 ((
                  ((
                   ((
                                                       ((
                                                            ((
          last_1_var_1_9
         ) == (
                                                             ((
           last_1_var_1_23
          ) % (
           var_1_4
          ))
         ))
        ) ? (
                                                        ((
          var_1_1
         ) == (
                                                         ((float) (
                                                          ((
            var_1_5
           ) - (
            var_1_6
           ))
          ))
         ))
        ) : (
         1
        ))
       ) && (
                                            ((
                                                  ((
          var_1_1
         ) >= (
          var_1_6
         ))
        ) ? (
                                             ((
          var_1_7
         ) == (
                                              ((signed long int) (
           var_1_8
          ))
         ))
        ) : (
         1
        ))
       ))
      ) && (
                                                      ((
                                                            ((
                                                             ((
                                                              ((
           var_1_6
          ) * (
           var_1_5
          ))
         ) / (
          var_1_10
         ))
        ) > (
         last_1_var_1_13
        ))
       ) ? (
                                                       ((
         var_1_11
        ) ? (
                                                        ((
          var_1_9
         ) == (
                                                         ((unsigned long int) (
           var_1_12
          ))
         ))
        ) : (
                                                        ((
          var_1_9
         ) == (
                                                         ((unsigned long int) (
           0u
          ))
         ))
        ))
       ) : (
        1
       ))
      ))
     ) && (
                                           ((
                                                  ((
        128
       ) <= (
        var_1_23
       ))
      ) ? (
                                            ((
        var_1_11
       ) ? (
                                             ((
         var_1_13
        ) == (
                                              ((float) (
                                               ((
           var_1_14
          ) + (
                                                ((((( ((((( 3.4f )) > (( var_1_15 ))) ? (( 3.4f )) : (( var_1_15 )))) )) < (( var_1_16 ))) ? (( ((((( 3.4f )) > (( var_1_15 ))) ? (( 3.4f )) : (( var_1_15 )))) )) : (( var_1_16 ))))
          ))
         ))
        ))
       ) : (
                                             ((
                                                    ((
          var_1_1
         ) < (
          var_1_16
         ))
        ) ? (
                                              ((
          var_1_13
         ) == (
                                               ((float) (
           var_1_6
          ))
         ))
        ) : (
                                              ((
          var_1_13
         ) == (
                                               ((float) (
           var_1_15
          ))
         ))
        ))
       ))
      ) : (
                                            ((
        var_1_13
       ) == (
                                             ((float) (
         var_1_5
        ))
       ))
      ))
     ))
    ) && (
                                          ((
                                                 ((
                                                  ((
        var_1_4
       ) * (
        var_1_9
       ))
      ) < (
       var_1_12
      ))
     ) ? (
                                           ((
       var_1_17
      ) == (
                                            ((signed short int) (
                                             ((
                                              ((
          var_1_19
         ) - (
                                               ((
           var_1_20
          ) + (
           var_1_21
          ))
         ))
        ) + (
         var_1_22
        ))
       ))
      ))
     ) : (
                                           ((
                                                  ((
        var_1_20
       ) >= (
        32
       ))
      ) ? (
                                            ((
        var_1_11
       ) ? (
                                             ((
         var_1_17
        ) == (
                                              ((signed short int) (
          100
         ))
        ))
       ) : (
                                             ((
         var_1_17
        ) == (
                                              ((signed short int) (
          var_1_20
         ))
        ))
       ))
      ) : (
       1
      ))
     ))
    ))
   ) && (
                                         ((
                                                ((
      var_1_19
     ) < (
      var_1_7
     ))
    ) ? (
                                          ((
                                                 ((
       var_1_25
      ) >= (
       var_1_9
      ))
     ) ? (
                                           ((
                                                  ((
        var_1_6
       ) < (
        var_1_15
       ))
      ) ? (
                                            ((
        var_1_23
       ) == (
                                             ((signed long int) (
         var_1_21
        ))
       ))
      ) : (
       1
      ))
     ) : (
      1
     ))
    ) : (
                                          ((
      var_1_23
     ) == (
                                           ((signed long int) (
       var_1_17
      ))
     ))
    ))
   ))
  ) && (
                                        ((
    var_1_24
   ) == (
                                         ((unsigned char) (
     2
    ))
   ))
  ))
 ) && (
                                       ((
   var_1_25
  ) == (
                                        ((unsigned long int) (
    var_1_21
   ))
  ))
 ))
) && (
                                      ((
  var_1_26
 ) == (
                                       ((signed long int) (
   var_1_8
  ))
 ))
))
;
}
int main(void) {
 isInitial = 1;
 initially();
 while (1) {
  updateLastVariables();
  updateVariables();
  step();
  __VERIFIER_assert(property());
  isInitial = 0;
 }
 return 0;
}
