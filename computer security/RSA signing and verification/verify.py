from Crypto.Signature import pkcs1_15
from Crypto.Hash import SHA256
from Crypto.PublicKey import RSA

key = RSA.import_key(open('RSA signing and verification/public.key').read())


file_in = open("RSA signing and verification/message.txt", "rb")
message=file_in.read()
file_in.close()

file_in = open("RSA signing and verification/signature.pem", "rb")
signature=file_in.read()
file_in.close()
h = SHA256.new(message)

try:
    pkcs1_15.new(key).verify(h, signature)
    print ("The signature is valid.")
except (ValueError, TypeError):
    print ("The signature is not valid.")