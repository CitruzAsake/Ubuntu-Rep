#include <gsl/gsl_vector.h>
#include <gsl/gsl_matrix.h>

double dot(gsl_vector* x, gsl_vector* y);

double vector_len(gsl_vector* vec);

void backsub(gsl_matrix* M, gsl_vector* v);

int matrix_print(FILE* stream, const gsl_matrix *X);

double vector_print(FILE* stream, gsl_vector* vec);

void GS_decomp(gsl_matrix* A, gsl_matrix* R);

void GS_solve(gsl_matrix *Q, gsl_matrix *R, gsl_vector *b, gsl_vector *x);

void GS_inverse(gsl_matrix *A, gsl_matrix *B);


