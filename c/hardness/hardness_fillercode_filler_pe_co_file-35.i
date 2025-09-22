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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch35Filler_PE_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 1;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 1;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 0;
unsigned short int var_1_6 = 25;
double var_1_9 = 999.625;
unsigned short int var_1_11 = 5;
signed short int var_1_12 = 2;
signed long int var_1_13 = -256;
double var_1_14 = 127.75;
signed short int var_1_15 = 2;
double var_1_16 = 9.75;
unsigned long int var_1_17 = 32;
double var_1_18 = 10.75;
unsigned long int var_1_19 = 4067291719;
float var_1_20 = 15.3;
signed char var_1_21 = 10;
float var_1_22 = 128.2;
float var_1_23 = 16.625;
signed long int var_1_24 = -100000;
signed long int var_1_25 = -128;
signed char var_1_26 = -25;
signed short int var_1_27 = 0;
signed long int var_1_28 = 2;
unsigned short int var_1_29 = 8;
unsigned short int var_1_30 = 1;
double var_1_31 = 128.6;
signed short int var_1_32 = -256;
double var_1_33 = 8.1;
double var_1_34 = 25.625;
double var_1_35 = 1.25;
unsigned char var_1_36 = 2;
unsigned char var_1_37 = 16;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 128;
unsigned char var_1_40 = 1;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 0;
unsigned long int var_1_43 = 0;
unsigned short int last_1_var_1_6 = 25;
signed short int last_1_var_1_12 = 2;
unsigned long int last_1_var_1_17 = 32;
signed char last_1_var_1_21 = 10;
void initially(void) {
}
void step(void) {
                                           if ( (( ((last_1_var_1_21) + (last_1_var_1_17))) < ( (( ((var_1_11) >> (var_1_15))) * (last_1_var_1_17))))) {
                                            var_1_14 = (
   var_1_16
  );
 } else {
                                            var_1_14 = (
   8.954
  );
 }
                                if ( (( ((((( ((var_1_16) * (200.7f)))) < (( ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)))))) ? (( ((var_1_16) * (200.7f)))) : (( ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)))))))) <= ( (( (- (var_1_14))) / (var_1_18))))) {
                                 var_1_17 = (
                                  ((
    var_1_19
   ) - (
    var_1_15
   ))
  );
 } else {
                                 var_1_17 = (
   var_1_19
  );
 }
 signed long int stepLocal_2 = last_1_var_1_6;
                                           if ( ((last_1_var_1_12) == (stepLocal_2))) {
                                            if ( (! (var_1_3))) {
                                             var_1_13 = (
                                              ((
                                               ((
      last_1_var_1_17
     ) + (
      last_1_var_1_12
     ))
    ) + (
                                               ((
      var_1_11
     ) - (
      last_1_var_1_17
     ))
    ))
   );
  }
 }
 unsigned long int stepLocal_0 = var_1_17;
                               if ( ((var_1_13) >= (stepLocal_0))) {
                                if ( (( ((var_1_9) - (1.00000000000025E12))) >= (var_1_14))) {
                                 var_1_6 = (
    200
   );
  } else {
                                 var_1_6 = (
    var_1_11
   );
  }
 } else {
                                var_1_6 = (
   var_1_11
  );
 }
 signed long int stepLocal_1 = var_1_13;
                               if ( ((var_1_11) > (stepLocal_1))) {
                                var_1_12 = (
   32
  );
 }
                              if (var_1_2) {
                               var_1_1 = (
                                ((
                                (! (
     var_1_3
    ))
   ) || (
    var_1_4
   ))
  );
 } else {
                               var_1_1 = (
                                ((
    var_1_3
   ) && (
    var_1_5
   ))
  );
 }
 signed long int stepLocal_3 = (((((var_1_13)) > ((var_1_12))) ? ((var_1_13)) : ((var_1_12))));
                                if ( ((stepLocal_3) <= ( ((var_1_15) << (var_1_17))))) {
                                 if (var_1_1) {
                                  var_1_20 = (
                                   ((((( var_1_16 )) > (( 7.9f ))) ? (( var_1_16 )) : (( 7.9f ))))
   );
  }
 }
                                var_1_21 = (
  var_1_15
 );
                   var_1_22 = (
  var_1_23
 );
                   var_1_24 = (
  var_1_25
 );
                   if ( ((var_1_23) <= (var_1_20))) {
                    if ( (( ((var_1_13) | ( ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))))) >= ( (( (((((10000)) < ((var_1_28))) ? ((10000)) : ((var_1_28))))) << ( ((var_1_29) + (var_1_30))))))) {
                     var_1_26 = (
                      ((((((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))) < 0 ) ? -(((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))) : (((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))))))
   );
  }
 } else {
                    var_1_26 = (
   var_1_29
  );
 }
                   if ( ((var_1_27) == ( (( ((((-256) < 0 ) ? -(-256) : (-256)))) % ( ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))))))) {
                    var_1_31 = (
                     ((
    var_1_33
   ) - (
                      ((((( (( 0.6 ) + ( var_1_34 )) )) < (( var_1_35 ))) ? (( (( 0.6 ) + ( var_1_34 )) )) : (( var_1_35 ))))
   ))
  );
 }
                   if ( (( (( ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)))) * (50.5))) > ( (- (var_1_23))))) {
                    var_1_36 = (
                     ((((( var_1_30 )) > (( var_1_29 ))) ? (( var_1_30 )) : (( var_1_29 ))))
  );
 }
                   if ( (! (var_1_1))) {
                    var_1_37 = (
                     ((
    var_1_39
   ) - (
                      ((((( 10 )) < (( ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))) ))) ? (( 10 )) : (( ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30))) ))))
   ))
  );
 }
                   if ( ((var_1_34) <= (var_1_33))) {
                    if ( ((var_1_38) || (var_1_41))) {
                     var_1_40 = (
                      (! (
                       (! (
      var_1_42
     ))
    ))
   );
  }
 }
                   if (var_1_42) {
                    if ( (( ((((( ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))))) > ((var_1_23))) ? (( ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))))) : ((var_1_23))))) != (var_1_14))) {
                     var_1_43 = (
    var_1_29
   );
  } else {
                     var_1_43 = (
    var_1_28
   );
  }
 } else {
                    var_1_43 = (
   var_1_29
  );
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 1);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 0);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 1);
 assume_abort_if_not(var_1_5 <= 1);
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 65534);
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= 1);
 assume_abort_if_not(var_1_15 <= 15);
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= -922337.2036854766000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= -922337.2036854776000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
 assume_abort_if_not(var_1_18 != 0.0F);
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 2147483647);
 assume_abort_if_not(var_1_19 <= 4294967294);
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= -922337.2036854766000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_25 >= -2147483647);
 assume_abort_if_not(var_1_25 <= 2147483646);
 var_1_27 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_27 >= -32767);
 assume_abort_if_not(var_1_27 <= 32767);
 var_1_28 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 2147483647);
 var_1_29 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 9);
 var_1_30 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 8);
 var_1_32 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_32 >= -32767);
 assume_abort_if_not(var_1_32 <= 32767);
 assume_abort_if_not(var_1_32 != 0);
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854766000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= 0.0F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 4611686.018427383000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854766000e+12F && var_1_35 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 1);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 127);
 assume_abort_if_not(var_1_39 <= 254);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 1);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 0);
}
void updateLastVariables(void) {
 last_1_var_1_6 = var_1_6;
 last_1_var_1_12 = var_1_12;
 last_1_var_1_17 = var_1_17;
 last_1_var_1_21 = var_1_21;
}
int property(void) {
 if (var_1_2) {
 } else {
 }
 if ( ((var_1_13) >= (var_1_17))) {
  if ( (( ((var_1_9) - (1.00000000000025E12))) >= (var_1_14))) {
  } else {
  }
 } else {
 }
 if ( ((var_1_11) > (var_1_13))) {
 }
 if ( ((last_1_var_1_12) == (last_1_var_1_6))) {
  if ( (! (var_1_3))) {
  }
 }
 if ( (( ((last_1_var_1_21) + (last_1_var_1_17))) < ( (( ((var_1_11) >> (var_1_15))) * (last_1_var_1_17))))) {
 } else {
 }
 if ( (( ((((( ((var_1_16) * (200.7f)))) < (( ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)))))) ? (( ((var_1_16) * (200.7f)))) : (( ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)))))))) <= ( (( (- (var_1_14))) / (var_1_18))))) {
 } else {
 }
 if ( (( (((((var_1_13)) > ((var_1_12))) ? ((var_1_13)) : ((var_1_12))))) <= ( ((var_1_15) << (var_1_17))))) {
  if (var_1_1) {
  }
 }
 return ((
             ((
              ((
               ((
                ((
                 ((
                  ((
                                           ((
        var_1_2
       ) ? (
                                            ((
         var_1_1
        ) == (
                                             ((unsigned char) (
                                              ((
                                              (! (
            var_1_3
           ))
          ) || (
           var_1_4
          ))
         ))
        ))
       ) : (
                                            ((
         var_1_1
        ) == (
                                             ((unsigned char) (
                                              ((
           var_1_3
          ) && (
           var_1_5
          ))
         ))
        ))
       ))
      ) && (
                                           ((
                                                 ((
         var_1_13
        ) >= (
         var_1_17
        ))
       ) ? (
                                            ((
                                                  ((
                                                   ((
           var_1_9
          ) - (
           1.00000000000025E12
          ))
         ) >= (
          var_1_14
         ))
        ) ? (
                                             ((
          var_1_6
         ) == (
                                              ((unsigned short int) (
           200
          ))
         ))
        ) : (
                                             ((
          var_1_6
         ) == (
                                              ((unsigned short int) (
           var_1_11
          ))
         ))
        ))
       ) : (
                                            ((
         var_1_6
        ) == (
                                             ((unsigned short int) (
          var_1_11
         ))
        ))
       ))
      ))
     ) && (
                                          ((
                                                ((
        var_1_11
       ) > (
        var_1_13
       ))
      ) ? (
                                           ((
        var_1_12
       ) == (
                                            ((signed short int) (
         32
        ))
       ))
      ) : (
       1
      ))
     ))
    ) && (
                                                     ((
                                                          ((
       last_1_var_1_12
      ) == (
       last_1_var_1_6
      ))
     ) ? (
                                                      ((
                                                            (! (
        var_1_3
       ))
      ) ? (
                                                       ((
        var_1_13
       ) == (
                                                        ((signed long int) (
                                                         ((
                                                          ((
           last_1_var_1_17
          ) + (
           last_1_var_1_12
          ))
         ) + (
                                                          ((
           var_1_11
          ) - (
           last_1_var_1_17
          ))
         ))
        ))
       ))
      ) : (
       1
      ))
     ) : (
      1
     ))
    ))
   ) && (
                                                    ((
                                                           ((
                                                            ((
       last_1_var_1_21
      ) + (
       last_1_var_1_17
      ))
     ) < (
                                                            ((
                                                             ((
        var_1_11
       ) >> (
        var_1_15
       ))
      ) * (
       last_1_var_1_17
      ))
     ))
    ) ? (
                                                     ((
      var_1_14
     ) == (
                                                      ((double) (
       var_1_16
      ))
     ))
    ) : (
                                                     ((
      var_1_14
     ) == (
                                                      ((double) (
       8.954
      ))
     ))
    ))
   ))
  ) && (
                                        ((
                                               ((
                                                ((((( (( var_1_16 ) * ( 200.7f )) )) < (( ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))) ))) ? (( (( var_1_16 ) * ( 200.7f )) )) : (( ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14))) ))))
    ) <= (
                                                ((
                                                 (- (
       var_1_14
      ))
     ) / (
      var_1_18
     ))
    ))
   ) ? (
                                         ((
     var_1_17
    ) == (
                                          ((unsigned long int) (
                                           ((
       var_1_19
      ) - (
       var_1_15
      ))
     ))
    ))
   ) : (
                                         ((
     var_1_17
    ) == (
                                          ((unsigned long int) (
      var_1_19
     ))
    ))
   ))
  ))
 ) && (
                                       ((
                                              ((
                                               ((((( var_1_13 )) > (( var_1_12 ))) ? (( var_1_13 )) : (( var_1_12 ))))
   ) <= (
                                               ((
     var_1_15
    ) << (
     var_1_17
    ))
   ))
  ) ? (
                                        ((
    var_1_1
   ) ? (
                                         ((
     var_1_20
    ) == (
                                          ((float) (
                                           ((((( var_1_16 )) > (( 7.9f ))) ? (( var_1_16 )) : (( 7.9f ))))
     ))
    ))
   ) : (
    1
   ))
  ) : (
   1
  ))
 ))
) && (
                                      ((
  var_1_21
 ) == (
                                       ((signed char) (
   var_1_15
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
