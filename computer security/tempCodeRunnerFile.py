# RSA key-pair
from Crypto.PublicKey import RSA
keyPair = RSA.generate(bits=1024)
print(f"Public key: (n={hex(keyPair.n)},e={hex(keyPair.e)})")
print(f"Private key: (n={hex(keyPair.n)},d={hex(keyPair.d)})")
print("\n")

# Signing Message
msg = b'A message for signing'

from hashlib import sha512

hash = int.from_bytes(sha512(msg).digest(), byteorder='big')
signature = pow(hash, keyPair.d, keyPair.n)
print("Signature:", hex(signature))
print("\n")

# Verifying Signature
hashFromSignature = pow(signature, keyPair.e, keyPair.n)
print("Signature valid:", hash == hashFromSignature)
print("\n")

#Return FALSE
print("Signature valid:", hash != hashFromSignature)
print("\n")

#Tampering Public Key
t_keyPair = RSA.generate(bits=1024)
hashFromSignature2 = pow(signature, t_keyPair.e, t_keyPair.n)
print("Tampered Signature valid:", hash == hashFromSignature2)
print("\n")

