import numpy as np
from scipy.linalg import solve_continuous_are

# State: [pos, vel, theta, omega]
A = np.zeros((4, 4))
B = np.zeros((4, 1))

Q = np.diag([1, 1, 10, 1])
R = np.array([[1]])

P = solve_continuous_are(A, B, Q, R)
K = np.linalg.inv(R) @ B.T @ P
print(K)
