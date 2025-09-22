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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch70Filler_PR_CI.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 5.05;
unsigned char var_1_2 = 1;
double var_1_6 = 0.0;
double var_1_7 = 49.5;
double var_1_8 = 16.75;
unsigned short int var_1_9 = 1;
unsigned char var_1_10 = 1;
unsigned long int var_1_11 = 8;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 32;
unsigned char var_1_15 = 50;
unsigned char var_1_16 = 8;
unsigned char var_1_17 = 32;
unsigned long int var_1_18 = 2;
unsigned long int var_1_19 = 3876014737;
unsigned char var_1_20 = 0;
unsigned short int var_1_21 = 25;
unsigned short int var_1_25 = 5;
unsigned short int var_1_26 = 256;
unsigned char var_1_27 = 1;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 0;
float var_1_34 = 255.25;
float var_1_36 = 4.131;
signed long int var_1_39 = -4;
float var_1_40 = 99999.8;
float var_1_41 = 25.25;
signed short int var_1_42 = 5;
signed short int var_1_43 = -128;
double last_1_var_1_1 = 5.05;
unsigned short int last_1_var_1_9 = 1;
unsigned char last_1_var_1_14 = 32;
unsigned long int last_1_var_1_18 = 2;
void initially(void) {
}
void step(void) {
                                            if ( ((var_1_6) > ( (((((var_1_8)) < ((last_1_var_1_1))) ? ((var_1_8)) : ((last_1_var_1_1))))))) {
                                             if ( (! ( (( ((last_1_var_1_1) == (var_1_7))) && ( ((var_1_2) || (var_1_10))))))) {
                                              if ( (! ( ((var_1_6) <= (var_1_7))))) {
                                              var_1_9 = (
                                               ((((( last_1_var_1_14 )) < (( last_1_var_1_18 ))) ? (( last_1_var_1_14 )) : (( last_1_var_1_18 ))))
    );
   }
  } else {
                                              var_1_9 = (
    last_1_var_1_18
   );
  }
 }
                   if ( (( ((var_1_19) <= (var_1_18))) && (var_1_2))) {
                    if ( (! ( (( (((((var_1_18)) > ((var_1_19))) ? ((var_1_18)) : ((var_1_19))))) < ( ((var_1_26) & (var_1_18))))))) {
                     var_1_27 = (
    var_1_13
   );
  } else {
                     if ( (( (~ (var_1_18))) >= ( ((var_1_18) & ( ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))))))) {
                      var_1_27 = (
     var_1_13
    );
   } else {
                      var_1_27 = (
     0
    );
   }
  }
 }
                   if ( (( ((var_1_11) + ( (((((var_1_18)) < ((1u))) ? ((var_1_18)) : ((1u))))))) > (var_1_25))) {
                    if (var_1_13) {
                     var_1_36 = (
                      ((
     var_1_7
    ) - (
     var_1_6
    ))
   );
  }
 }
                   var_1_41 = (
  25.84f
 );
                                           if ( (( ((8) - (64))) <= ( ((last_1_var_1_9) - (last_1_var_1_18))))) {
                                            var_1_14 = (
                                             ((((( (( var_1_15 ) + ( var_1_16 )) )) < (( var_1_17 ))) ? (( (( var_1_15 ) + ( var_1_16 )) )) : (( var_1_17 ))))
  );
 } else {
                                            var_1_14 = (
   var_1_17
  );
 }
                   var_1_42 = (
  5
 );
                                if (var_1_13) {
                                 var_1_18 = (
                                  ((
                                   ((
     var_1_19
    ) - (
     var_1_9
    ))
   ) - (
    var_1_14
   ))
  );
 } else {
                                 var_1_18 = (
                                  ((((( (( var_1_19 ) - ( var_1_17 )) )) > (( var_1_15 ))) ? (( (( var_1_19 ) - ( var_1_17 )) )) : (( var_1_15 ))))
  );
 }
                   if ( (! (var_1_20))) {
                    if ( ((var_1_18) < (8))) {
                     var_1_39 = (
                      ((
                       ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))
    ) + (
     var_1_18
    ))
   );
  }
 }
                                var_1_11 = (
                                 ((
   var_1_14
  ) + (
                                  ((
                                   ((((( var_1_18 )) < (( var_1_9 ))) ? (( var_1_18 )) : (( var_1_9 ))))
   ) + (
    2u
   ))
  ))
 );
                   if ( (( (((((var_1_18)) < ((var_1_19))) ? ((var_1_18)) : ((var_1_19))))) > (var_1_11))) {
                    var_1_21 = (
                     ((((( (( ((((( var_1_25 )) < (( 0 ))) ? (( var_1_25 )) : (( 0 )))) ) + ( var_1_26 )) )) < (( 16 ))) ? (( (( ((((( var_1_25 )) < (( 0 ))) ? (( var_1_25 )) : (( 0 )))) ) + ( var_1_26 )) )) : (( 16 ))))
  );
 }
 unsigned long int stepLocal_0 = var_1_11;
                               if ( ((stepLocal_0) >= ( (- ( (((((var_1_11)) < ((var_1_14))) ? ((var_1_11)) : ((var_1_14))))))))) {
                                var_1_1 = (
                                 ((
                                  ((
                                   ((
      var_1_6
     ) - (
      var_1_7
     ))
    ) - (
                                   ((((( 64.75 )) > (( 128.725 ))) ? (( 64.75 )) : (( 128.725 ))))
    ))
   ) + (
    var_1_8
   ))
  );
 } else {
                                var_1_1 = (
   var_1_7
  );
 }
                   var_1_43 = (
  var_1_14
 );
                                if ( (( ((var_1_18) / (var_1_19))) <= ( (((((var_1_11)) < ((var_1_18))) ? ((var_1_11)) : ((var_1_18))))))) {
                                 var_1_20 = (
   var_1_13
  );
 }
                                if (var_1_20) {
                                 var_1_12 = (
   var_1_13
  );
 }
                   if ( ((var_1_18) < (var_1_9))) {
                    var_1_31 = (
                     (! (
    var_1_32
   ))
  );
 } else {
                    var_1_31 = (
                     ((
    var_1_32
   ) || (
                      (! (
     var_1_33
    ))
   ))
  );
 }
                   var_1_34 = (
  var_1_7
 );
                   if (var_1_13) {
                    var_1_40 = (
   var_1_6
  );
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= 2305843.009213691400e+12F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 2305843.009213691400e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -461168.6018427383000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 1);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 127);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 127);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 254);
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 3221225470);
 assume_abort_if_not(var_1_19 <= 4294967294);
 var_1_25 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 32767);
 var_1_26 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 32767);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 0);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 0);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_9 = var_1_9;
 last_1_var_1_14 = var_1_14;
 last_1_var_1_18 = var_1_18;
}
int property(void) {
 if ( ((var_1_11) >= ( (- ( (((((var_1_11)) < ((var_1_14))) ? ((var_1_11)) : ((var_1_14))))))))) {
 } else {
 }
 if ( ((var_1_6) > ( (((((var_1_8)) < ((last_1_var_1_1))) ? ((var_1_8)) : ((last_1_var_1_1))))))) {
  if ( (! ( (( ((last_1_var_1_1) == (var_1_7))) && ( ((var_1_2) || (var_1_10))))))) {
   if ( (! ( ((var_1_6) <= (var_1_7))))) {
   }
  } else {
  }
 }
 if (var_1_20) {
 }
 if ( (( ((8) - (64))) <= ( ((last_1_var_1_9) - (last_1_var_1_18))))) {
 } else {
 }
 if (var_1_13) {
 } else {
 }
 if ( (( ((var_1_18) / (var_1_19))) <= ( (((((var_1_11)) < ((var_1_18))) ? ((var_1_11)) : ((var_1_18))))))) {
 }
 return ((
             ((
              ((
               ((
                ((
                 ((
                                          ((
                                               ((
        var_1_11
       ) >= (
                                                (- (
                                                 ((((( var_1_11 )) < (( var_1_14 ))) ? (( var_1_11 )) : (( var_1_14 ))))
        ))
       ))
      ) ? (
                                           ((
        var_1_1
       ) == (
                                            ((double) (
                                             ((
                                              ((
                                               ((
            var_1_6
           ) - (
            var_1_7
           ))
          ) - (
                                               ((((( 64.75 )) > (( 128.725 ))) ? (( 64.75 )) : (( 128.725 ))))
          ))
         ) + (
          var_1_8
         ))
        ))
       ))
      ) : (
                                           ((
        var_1_1
       ) == (
                                            ((double) (
         var_1_7
        ))
       ))
      ))
     ) && (
                                                        ((
                                                            ((
        var_1_6
       ) > (
                                                             ((((( var_1_8 )) < (( last_1_var_1_1 ))) ? (( var_1_8 )) : (( last_1_var_1_1 ))))
       ))
      ) ? (
                                                         ((
                                                              (! (
                                                               ((
                                                               ((
           last_1_var_1_1
          ) == (
           var_1_7
          ))
         ) && (
                                                                ((
           var_1_2
          ) || (
           var_1_10
          ))
         ))
        ))
       ) ? (
                                                          ((
                                                               (! (
                                                                ((
           var_1_6
          ) <= (
           var_1_7
          ))
         ))
        ) ? (
                                                          ((
          var_1_9
         ) == (
                                                           ((unsigned short int) (
                                                            ((((( last_1_var_1_14 )) < (( last_1_var_1_18 ))) ? (( last_1_var_1_14 )) : (( last_1_var_1_18 ))))
          ))
         ))
        ) : (
         1
        ))
       ) : (
                                                          ((
         var_1_9
        ) == (
                                                           ((unsigned short int) (
          last_1_var_1_18
         ))
        ))
       ))
      ) : (
       1
      ))
     ))
    ) && (
                                          ((
      var_1_11
     ) == (
                                           ((unsigned long int) (
                                            ((
        var_1_14
       ) + (
                                             ((
                                              ((((( var_1_18 )) < (( var_1_9 ))) ? (( var_1_18 )) : (( var_1_9 ))))
        ) + (
         2u
        ))
       ))
      ))
     ))
    ))
   ) && (
                                         ((
     var_1_20
    ) ? (
                                          ((
      var_1_12
     ) == (
                                           ((unsigned char) (
       var_1_13
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
      8
     ) - (
      64
     ))
    ) <= (
                                                           ((
      last_1_var_1_9
     ) - (
      last_1_var_1_18
     ))
    ))
   ) ? (
                                                     ((
     var_1_14
    ) == (
                                                      ((unsigned char) (
                                                      ((((( (( var_1_15 ) + ( var_1_16 )) )) < (( var_1_17 ))) ? (( (( var_1_15 ) + ( var_1_16 )) )) : (( var_1_17 ))))
     ))
    ))
   ) : (
                                                     ((
     var_1_14
    ) == (
                                                      ((unsigned char) (
      var_1_17
     ))
    ))
   ))
  ))
 ) && (
                                       ((
   var_1_13
  ) ? (
                                        ((
    var_1_18
   ) == (
                                         ((unsigned long int) (
                                          ((
                                           ((
       var_1_19
      ) - (
       var_1_9
      ))
     ) - (
      var_1_14
     ))
    ))
   ))
  ) : (
                                        ((
    var_1_18
   ) == (
                                         ((unsigned long int) (
                                          ((((( (( var_1_19 ) - ( var_1_17 )) )) > (( var_1_15 ))) ? (( (( var_1_19 ) - ( var_1_17 )) )) : (( var_1_15 ))))
    ))
   ))
  ))
 ))
) && (
                                      ((
                                             ((
                                              ((
    var_1_18
   ) / (
    var_1_19
   ))
  ) <= (
                                              ((((( var_1_11 )) < (( var_1_18 ))) ? (( var_1_11 )) : (( var_1_18 ))))
  ))
 ) ? (
                                       ((
   var_1_20
  ) == (
                                        ((unsigned char) (
    var_1_13
   ))
  ))
 ) : (
  1
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
