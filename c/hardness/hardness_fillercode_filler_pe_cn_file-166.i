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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch166Filler_PE_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 0;
unsigned short int var_1_2 = 0;
unsigned short int var_1_3 = 128;
unsigned short int var_1_6 = 25;
unsigned char var_1_7 = 0;
unsigned short int var_1_8 = 64;
signed long int var_1_9 = 32;
unsigned short int var_1_10 = 41078;
unsigned short int var_1_11 = 0;
unsigned short int var_1_12 = 0;
float var_1_13 = 64.6;
float var_1_14 = 7.5;
float var_1_15 = 63.4;
float var_1_18 = 31.25;
float var_1_19 = 15.75;
float var_1_20 = 49.625;
signed short int var_1_21 = 10;
signed short int var_1_22 = 16;
unsigned long int var_1_23 = 128;
unsigned char var_1_24 = 0;
unsigned long int var_1_25 = 2;
unsigned long int var_1_26 = 0;
unsigned long int var_1_27 = 5;
unsigned char var_1_28 = 1;
signed long int var_1_29 = -50;
signed long int var_1_30 = 256;
unsigned char var_1_31 = 0;
unsigned long int var_1_32 = 128;
double var_1_33 = 1.5;
double var_1_34 = 1.8;
double var_1_35 = 49.6;
unsigned long int var_1_36 = 5;
unsigned char var_1_37 = 10;
unsigned char var_1_38 = 100;
unsigned char var_1_39 = 8;
unsigned char var_1_40 = 200;
signed char var_1_41 = -16;
signed char var_1_42 = -100;
signed char var_1_43 = -8;
double var_1_44 = 64.875;
signed long int var_1_45 = 5;
signed long int var_1_46 = 8;
double var_1_47 = 64.52;
void initially(void) {
}
void step(void) {
 unsigned short int stepLocal_1 = var_1_2;
 unsigned short int stepLocal_0 = var_1_3;
                              if ( ((var_1_2) <= (stepLocal_0))) {
                               if ( ((stepLocal_1) > ( ((var_1_3) * (var_1_6))))) {
                                var_1_1 = (
                                 (! (
                                  ((
                                   ((
       var_1_3
      ) <= (
       var_1_2
      ))
     ) || (
      var_1_7
     ))
    ))
   );
  } else {
                                var_1_1 = (
    var_1_7
   );
  }
 }
                              if ( ((var_1_2) != (var_1_6))) {
                               var_1_8 = (
                                ((
    var_1_10
   ) - (
                                 ((
     var_1_11
    ) + (
     var_1_12
    ))
   ))
  );
 }
 unsigned short int stepLocal_2 = var_1_11;
                               if ( ((var_1_8) > (stepLocal_2))) {
                                var_1_20 = (
                                 ((((( ((((63.5f) < 0 ) ? -(63.5f) : (63.5f))) )) < (( var_1_15 ))) ? (( ((((63.5f) < 0 ) ? -(63.5f) : (63.5f))) )) : (( var_1_15 ))))
  );
 }
                               if (var_1_1) {
                                if ( ((10) == ( ((var_1_11) + (var_1_8))))) {
                                 var_1_22 = (
                                   ((
     var_1_12
    ) - (
     var_1_11
    ))
   );
  } else {
                                  var_1_22 = (
    var_1_11
   );
  }
 } else {
                                 var_1_22 = (
   var_1_12
  );
 }
                               if ( ((var_1_1) || (var_1_7))) {
                                var_1_13 = (
                                ((
    var_1_14
   ) + (
    var_1_15
   ))
  );
 } else {
                                if ( (( (( (((((var_1_14)) > ((var_1_15))) ? ((var_1_14)) : ((var_1_15))))) * (var_1_20))) <= (var_1_20))) {
                                 if ( ((var_1_9) == (var_1_12))) {
                                  var_1_13 = (
                                   ((
      var_1_18
     ) - (
                                    ((((( var_1_19 )) < (( 2.225f ))) ? (( var_1_19 )) : (( 2.225f ))))
     ))
    );
   }
  } else {
                                 var_1_13 = (
    var_1_15
   );
  }
 }
                               if ( ((var_1_15) < ( (- (var_1_13))))) {
                                var_1_21 = (
                                 ((((( var_1_12 )) < (( var_1_11 ))) ? (( var_1_12 )) : (( var_1_11 ))))
  );
 } else {
                                if (var_1_1) {
                                 if (var_1_1) {
                                  var_1_21 = (
     var_1_12
    );
   }
  } else {
                                 var_1_21 = (
    var_1_11
   );
  }
 }
            if ( (! (var_1_24))) {
             if (var_1_24) {
              var_1_23 = (
               ((((( ((((( var_1_25 )) > (( var_1_26 ))) ? (( var_1_25 )) : (( var_1_26 )))) )) > (( var_1_27 ))) ? (( ((((( var_1_25 )) > (( var_1_26 ))) ? (( var_1_25 )) : (( var_1_26 )))) )) : (( var_1_27 ))))
   );
  }
 }
            if (var_1_24) {
             if ( (( (((((((((var_1_29)) > ((var_1_30))) ? ((var_1_29)) : ((var_1_30))))) < 0 ) ? -((((((var_1_29)) > ((var_1_30))) ? ((var_1_29)) : ((var_1_30))))) : ((((((var_1_29)) > ((var_1_30))) ? ((var_1_29)) : ((var_1_30)))))))) > (var_1_23))) {
              var_1_28 = (
               ((
                ((
      var_1_26
     ) > (
      var_1_25
     ))
    ) || (
                (! (
      var_1_31
     ))
    ))
   );
  }
 }
             if ( (( ((0.8) * (var_1_33))) < ( ((var_1_34) * (var_1_35))))) {
              if (var_1_28) {
              var_1_32 = (
               ((((( (( 2u ) + ( ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))) )) )) > (( var_1_25 ))) ? (( (( 2u ) + ( ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36))) )) )) : (( var_1_25 ))))
   );
  } else {
              var_1_32 = (
    var_1_26
   );
  }
 } else {
              var_1_32 = (
   var_1_27
  );
 }
             if ( (! (var_1_24))) {
              var_1_37 = (
               ((((( var_1_38 )) > (( ((((( var_1_39 )) < (( var_1_40 ))) ? (( var_1_39 )) : (( var_1_40 )))) ))) ? (( var_1_38 )) : (( ((((( var_1_39 )) < (( var_1_40 ))) ? (( var_1_39 )) : (( var_1_40 )))) ))))
  );
 }
             if ( ((var_1_39) == ( ((var_1_30) + (var_1_37))))) {
              if ( ((var_1_34) != ( (((((var_1_33)) > ((var_1_35))) ? ((var_1_33)) : ((var_1_35))))))) {
               var_1_41 = (
                ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42)))
   );
  }
 }
             if ( (( ((var_1_25) ^ (var_1_40))) >= (var_1_23))) {
              var_1_43 = (
               ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42)))
  );
 }
             if ( (( (( ((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)))) % (var_1_45))) < ( (( (((((var_1_38)) < ((var_1_40))) ? ((var_1_38)) : ((var_1_40))))) >> (var_1_46))))) {
              var_1_44 = (
   var_1_47
  );
 } else {
              var_1_44 = (
   1.25
  );
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 65535);
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 65535);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 65535);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 1);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= -2147483648);
 assume_abort_if_not(var_1_9 <= 2147483647);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 32767);
 assume_abort_if_not(var_1_10 <= 65534);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 16384);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 16383);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -461168.6018427383000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -461168.6018427383000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 1);
 var_1_25 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 4294967294);
 var_1_26 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 4294967294);
 var_1_27 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 4294967294);
 var_1_29 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_29 >= -2147483647);
 assume_abort_if_not(var_1_29 <= 2147483647);
 var_1_30 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_30 >= -2147483647);
 assume_abort_if_not(var_1_30 <= 2147483647);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 0);
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= -922337.2036854776000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= -922337.2036854776000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 2147483647);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 254);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 254);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 254);
 var_1_42 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_42 >= -126);
 assume_abort_if_not(var_1_42 <= 126);
 var_1_45 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_45 >= -2147483648);
 assume_abort_if_not(var_1_45 <= 2147483647);
 assume_abort_if_not(var_1_45 != 0);
 var_1_46 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_46 >= 1);
 assume_abort_if_not(var_1_46 <= 30);
 var_1_47 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_47 >= -922337.2036854766000e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854766000e+12F && var_1_47 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 if ( ((var_1_2) <= (var_1_3))) {
  if ( ((var_1_2) > ( ((var_1_3) * (var_1_6))))) {
  } else {
  }
 }
 if ( ((var_1_2) != (var_1_6))) {
 }
 if ( ((var_1_1) || (var_1_7))) {
 } else {
  if ( (( (( (((((var_1_14)) > ((var_1_15))) ? ((var_1_14)) : ((var_1_15))))) * (var_1_20))) <= (var_1_20))) {
   if ( ((var_1_9) == (var_1_12))) {
   }
  } else {
  }
 }
 if ( ((var_1_8) > (var_1_11))) {
 }
 if ( ((var_1_15) < ( (- (var_1_13))))) {
 } else {
  if (var_1_1) {
   if (var_1_1) {
   }
  } else {
  }
 }
 if (var_1_1) {
  if ( ((10) == ( ((var_1_11) + (var_1_8))))) {
  } else {
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
       var_1_2
      ) <= (
       var_1_3
      ))
     ) ? (
                                          ((
                                                ((
        var_1_2
       ) > (
                                                 ((
         var_1_3
        ) * (
         var_1_6
        ))
       ))
      ) ? (
                                           ((
        var_1_1
       ) == (
                                            ((unsigned char) (
                                             (! (
                                              ((
                                               ((
            var_1_3
           ) <= (
            var_1_2
           ))
          ) || (
           var_1_7
          ))
         ))
        ))
       ))
      ) : (
                                           ((
        var_1_1
       ) == (
                                            ((unsigned char) (
         var_1_7
        ))
       ))
      ))
     ) : (
      1
     ))
    ) && (
                                         ((
                                               ((
       var_1_2
      ) != (
       var_1_6
      ))
     ) ? (
                                          ((
       var_1_8
      ) == (
                                           ((unsigned short int) (
                                            ((
         var_1_10
        ) - (
                                             ((
          var_1_11
         ) + (
          var_1_12
         ))
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
      var_1_1
     ) || (
      var_1_7
     ))
    ) ? (
                                          ((
      var_1_13
     ) == (
                                           ((float) (
                                           ((
        var_1_14
       ) + (
        var_1_15
       ))
      ))
     ))
    ) : (
                                          ((
                                                 ((
                                                  ((
                                                   ((((( var_1_14 )) > (( var_1_15 ))) ? (( var_1_14 )) : (( var_1_15 ))))
       ) * (
        var_1_20
       ))
      ) <= (
       var_1_20
      ))
     ) ? (
                                           ((
                                                  ((
        var_1_9
       ) == (
        var_1_12
       ))
      ) ? (
                                            ((
        var_1_13
       ) == (
                                             ((float) (
                                              ((
          var_1_18
         ) - (
                                               ((((( var_1_19 )) < (( 2.225f ))) ? (( var_1_19 )) : (( 2.225f ))))
         ))
        ))
       ))
      ) : (
       1
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
   ))
  ) && (
                                        ((
                                               ((
     var_1_8
    ) > (
     var_1_11
    ))
   ) ? (
                                         ((
     var_1_20
    ) == (
                                          ((float) (
                                           ((((( ((((63.5f) < 0 ) ? -(63.5f) : (63.5f))) )) < (( var_1_15 ))) ? (( ((((63.5f) < 0 ) ? -(63.5f) : (63.5f))) )) : (( var_1_15 ))))
     ))
    ))
   ) : (
    1
   ))
  ))
 ) && (
                                       ((
                                              ((
    var_1_15
   ) < (
                                               (- (
     var_1_13
    ))
   ))
  ) ? (
                                        ((
    var_1_21
   ) == (
                                         ((signed short int) (
                                          ((((( var_1_12 )) < (( var_1_11 ))) ? (( var_1_12 )) : (( var_1_11 ))))
    ))
   ))
  ) : (
                                        ((
    var_1_1
   ) ? (
                                         ((
     var_1_1
    ) ? (
                                          ((
      var_1_21
     ) == (
                                           ((signed short int) (
       var_1_12
      ))
     ))
    ) : (
     1
    ))
   ) : (
                                         ((
     var_1_21
    ) == (
                                          ((signed short int) (
      var_1_11
     ))
    ))
   ))
  ))
 ))
) && (
                                      ((
  var_1_1
 ) ? (
                                       ((
                                              ((
    10
   ) == (
                                               ((
     var_1_11
    ) + (
     var_1_8
    ))
   ))
  ) ? (
                                        ((
    var_1_22
   ) == (
                                         ((signed short int) (
                                          ((
      var_1_12
     ) - (
      var_1_11
     ))
    ))
   ))
  ) : (
                                        ((
    var_1_22
   ) == (
                                         ((signed short int) (
     var_1_11
    ))
   ))
  ))
 ) : (
                                       ((
   var_1_22
  ) == (
                                        ((signed short int) (
    var_1_12
   ))
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
