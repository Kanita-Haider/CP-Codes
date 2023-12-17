from Crypto.Signature import pkcs1_15
from Crypto.Hash import SHA256
from Crypto.PublicKey import RSA


message = b'This message is from me'
key = RSA.import_key(open('RSA signing and verification/private.key').read())
h = SHA256.new(message)



signer=pkcs1_15.new(key)
signature=signer.sign(h)
print(signature.hex())


file_out = open("RSA signing and verification/signature.pem", "wb")
file_out.write(signature)
file_out.close()

file_out = open("RSA signing and verification/message.txt", "wb")
file_out.write(message)
file_out.close()


